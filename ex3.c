#include <stdio.h>

int crash()
{
	int i = 0;
	int a = 1;
	int b;
	b = a/i;
	return b;
}

int main()
{
	int age = 10;
	int height = 72;
	printf("I am %d years old. \n",age);
	printf("I am %d inches tall. \n",height);
	crash();
	return 0;
}
