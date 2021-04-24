#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{//Lets say you wanna compare "Mo" and "oM" - it looks like its the same thing as they both are the same stuffs but not in same order, but its not same, you look frm LtoR, so 1 character in 1st is M while 1st character in 2nd is o, obviously smaller character are larger thn capital in ASCII, so result is Mo is smaller than oM
	char name[] = "Mo"; //in ASCII, lowercase is largest, followed by uppercase, then digits, then spaces- the smallest of all printting characters
	char name2[] = "oM";
	
	printf("The strlen of name is %d\n", strlen(name));
	printf("The strlen of name2 is %d\n", strlen(name2));

//in ASCII, lowercase is largest, followed by uppercase, then digits, then spaces- the smallest of all printting characters

	printf("*****************\n");
	
	if (strcmp(name,name2)>0){ //compare left right, if larger than zero left is bigger than right, basically its like LEFT MINUES RIGHR- just like normal MATHS
	//NOTE NOTE NOTE NOTE NOTE NOTE NOTE =======  THERES ANOTHER THING CALLED STRCMPI, its pretty dumb, it treats A and a as the same thing, its case insensitive
	printf("First name is greater than second name");
	}
	
	else if (strcmp(name, name2)==0){
	printf("Both first and last name have got equal ASCII values");
	}
	
	else{
	printf("First name is smaller than last name");
	}
	//NOTE NOTE NOTE === THERES ANOTHER THING CALLED STRCMPI, its pretty stupid, its case insensitive, it treats A and a as the same thing
	
	return 0;
}
