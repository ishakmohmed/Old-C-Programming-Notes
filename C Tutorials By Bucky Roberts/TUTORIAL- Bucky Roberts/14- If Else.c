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
		else{
		printf("You're a big girl");
		}			
	}
	
	else{
		if (gender == 'M'){
		printf("You're a young boy");
		}
		else{
		printf("You're a young girl");
		}			
	}	
		
	return 0;
}
