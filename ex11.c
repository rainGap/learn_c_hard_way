#include <stdio.h>

int main(int argc,char ** argv)
{
	int numbers[4] = {'a'};
	char name[4] = {'a'};
	printf("numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("name : %s\n",name);
	
	//set up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//set up the name
	name[0] = 'f';
	name[1] = 'o';
	name[2] = 'x';
	name[3] = 'x';
	name[4] = 'x';
	printf("numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("name: %c%c%c%c\n",name[0],name[1],name[2],name[3]);
	printf("name: %s\n",name);
	char * another = "Zed";
	printf("another %s\n",another);
	printf("%d %c",another[3],another[3]);
}
