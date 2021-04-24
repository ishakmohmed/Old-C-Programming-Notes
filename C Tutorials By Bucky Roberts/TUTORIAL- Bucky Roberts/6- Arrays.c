#include <stdio.h>
#include <stdlib.h>

main()
{
	char name[]="Mohmed Ishak";
	printf("My name is %s\n", name);
	
	name[8]='z';
	printf("My name is %s\n", name);
	
	char food[]= "chicken";
	printf("The best food is %s\n", food);
	
	strcpy(food, "pizza");
	printf("The best food is %s", food);
	
	return 0;
}
