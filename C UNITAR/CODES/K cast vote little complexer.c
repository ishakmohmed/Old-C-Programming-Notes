#include <stdio.h>

// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP
// CHANGE THIS THING TO WHILE LOOP

main()
{
	int age;
	char ans;
	
	do{
	printf("Input the age of the candidate: ");
	scanf("%d", &age);
	
	if (age>=21){
	printf("Congratulations! You are eligible for casting your vote.");}
	
	else if (age<21){
	printf("Sorryy! You are not eligible to cast your vote");}
	
	else{ 
	printf("Sorry! The age in not valid");}		
	
	printf("\nCOOOOONNNNNNTTTINUE?????\n");
	scanf("%s", &ans);
	}while (ans=='Y');
}


