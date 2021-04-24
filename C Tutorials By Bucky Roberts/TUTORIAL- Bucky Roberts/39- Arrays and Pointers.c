#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	int i, meatBalls[]= {20,21,22,23,24};
	
			printf("Element \t Address \t\t Value\n");
	for(i=0;i<5;i++){
		printf("meatBalls[%d] \t %p \t %d\n", i, &meatBalls[i], meatBalls[i]);//maybe for the centre variable you don't need & and [i] before and after the name, meatBalls, but because you wannna loop it over and over again, you need it, if no, no, refer the next note after 2 lines
	}								//hold on I guess for ^ you need &and i cause you didn't declare a pointer before it, so now you need to sort of make it a pointer
	
	printf("MEATBALLS \t\t %p\n", meatBalls); //this is like printing the main meatball out of 5's address value //You dont needa &meatBalls, just meatBalls because its already a pointer since meatBalls is an AAAARRRRAAAYYYYYYYYYYYYYYYYYYYYY //the memory address output is the memory address of first meatball out of 5, this is what happens when the variable is an array
	printf("*MEATBALLS \t\t %d\n", *meatBalls); //here- you're dereferencing so use %d 
	printf("*(MEATBALLS +2)\t\t %d\n", *(meatBalls+2));	//if only theres no star you cant print it correctly cause its an array, so * is like the shortcut to print the first value in array, if meatBalls + 2 then the third value
	
	return 0;
}
