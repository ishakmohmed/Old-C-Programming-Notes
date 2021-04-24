#include <stdio.h>
#include <stdlib.h>

main()
{
	float marks1, marks2, marks3, AVR;
	
	printf("Enter your 3 marks:\n");
	scanf(" %f", &marks1);
	scanf(" %f", &marks2);	
	scanf(" %f", &marks3);

	AVR=(marks1+marks2+marks3)/3;
	printf("Your average marks is %.2f", AVR);
	
	if (AVR>90){
		printf("\nYou got an A+");}
	
	else if (AVR>80){
		printf("\nYou got an A");}
	
	else {
		printf("\nYou are dumb!");}

	return 0;
}
