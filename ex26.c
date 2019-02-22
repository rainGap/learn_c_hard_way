#include <stdio.h>
#include <io.h>

int addFileList(char* nameArray[], char * name, int * count);

#define MAX_FILE_NUM 256
int main(int argc, char * argv[])
{
	struct _finddata_t find;
	long file;
	int fileCount = 0;
	file = _findfirst("*.txt", &find);
	if (file == -1L)
	{
		printf("blank!");
	}

	char *nameList[MAX_FILE_NUM] = { '\0' };
	char *b = malloc(256);
	strcpy(b, find.name);
	addFileList(nameList, b, &fileCount);
	while (_findnext(file, &find) == 0) {
		char *temp = malloc(sizeof(char) * 256);
		strcpy(temp, find.name);
		addFileList(nameList, temp, &fileCount);
		
	}
	int matchFileCnt = 0;
	
	for (int i = 0; i < fileCount; i++) {
		char temp[256];
		FILE* hf;
		int errno = fopen_s(&hf,nameList[i], "r");
		int matchCount = 0;
		while (!feof(hf))
		{
			int rc = fscanf_s(hf, "%s", temp,256);
			if (rc!=1) {
				break;
			}
			for (int j = 1; j < argc; j++) {
				int rc = strcmp(argv[j], temp);
				if (rc == 0)
					matchCount |= 1<<(j-1) ;
			}
			int matchNum = 1;
			for (int k = 0; k < argc-1; k++) {
				matchNum = matchNum << 1;
			}
			matchNum--;
			if (matchCount == matchNum)
			{
				printf("file %s is matched\n", nameList[i]);
				break;
			}
		}
		fclose(hf);
	}

	
	_findclose(file);
	fgetc(stdin);
}
int addFileList(char* nameArray[], char * name, int * count)
{
	nameArray[*count] = name;
	*count = *count + 1;
}