#include <stdio.h>
int main(int args, char** argv)
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away. \n",distance);
	printf("You have %f levels of power.\n",power);
	printf("You have %f awesome super powers.\n",super_power);
	printf("I have an initial %c \n",initial);
	printf("I have a first name %s\n",first_name);
	printf("I have a last name %s\n",last_name);
	printf("My whole name is %s %c. %s.\n",first_name,initial,last_name);
	
	int bugs = 100;
	double bug_rate = 1.2;
	printf("You have %d bugs at the imageinary rate of %f.\n",bugs,bug_rate);
	unsigned long univers_of_defects = 1LU*1024LU*1024LU*1024LU*1024LU*1024LU*1024LU*2LU*2LU*2LU*2LU-1LU;
	//unsigned long univers_of_defects = 18446744073709551615LU;
	printf("The entire univers has %lu bugs. \n",univers_of_defects);

	double expected_bugs = bugs* bug_rate;
	printf("You are expected to have %f bugs. \n",expected_bugs);

	double part_of_univers = expected_bugs/univers_of_defects;
	printf("That is only a %e portion of the univers. \n",part_of_univers);

	char nul_byte = '\0';
	int care_percentage = bugs*nul_byte;
	printf("Which means you should care %c%%. \n",care_percentage);
	
	printf("Size of long: %lu\n",sizeof(long));
	printf("Size of int: %lu\n",sizeof(int));
	return 0;
}


