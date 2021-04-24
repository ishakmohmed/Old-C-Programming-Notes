#include <stdio.h>
#include <stdlib.h>

main ()
{
	int age;
	char gender;	
	
	printf("What is your age?");
	scanf(" %d", &age);
	
	printf("What is your gender? (M/F)");
	scanf(" %c", &gender);
	
	if (age>=18){
		if (gender == 'M'){
		printf("You're a big boy");
		}
		if (gender == 'F'){
		printf("You're a big girl");
		}			
	}
	
	if (age<18){
		if (gender == 'M'){
		printf("You're a young boy");
		}
		if (gender == 'F'){
		printf("You're a young girl");
		}			
	}	
		
	return 0;
}
