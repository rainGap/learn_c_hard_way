#include <stdio.h>

int main(int argc,char ** argv)
{
	int areas[] = {10,12,13,14,20};
	char name[] = "Zed";
	char full_name[] = {
		'Z','e','d',' ','A','.',' ','s','h','a','w','\0'
	};
	full_name[0] = 'F';
	full_name[1] = 'o';
	full_name[2] = 'x';
	printf("The size of an int:%ld\n",sizeof(int));
	printf("The size of areas (int[]):%ld\n",sizeof(areas));
	printf("The number of ints in areas:%ld\n",sizeof(areas)/sizeof(int));	
	printf("The size of a char:%ld\n",sizeof(char));
	printf("The size of name (char[]):%ld\n",sizeof(name));
	printf("areas[10]:%d\n",areas[10]);
	printf("The number of chars:%ld\n",sizeof(name)/sizeof(char));
	printf("The size of a fullname:%ld\n",sizeof(full_name));
	printf("The number of chars:%ld\n",sizeof(full_name)/sizeof(char));
	printf("name = \"%s\" and full_name=\"%s\"\n",name,full_name);
	return 0;
}

