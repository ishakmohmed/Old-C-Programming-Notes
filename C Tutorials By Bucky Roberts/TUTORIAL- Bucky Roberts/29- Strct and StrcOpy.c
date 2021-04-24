#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main() 
{	
	char ALPHABET= 'x';
	//lesson: in c programming if its just one thing like a single alphabet/number/etc, use %c.....
	printf("%c is now capitalized\n", toupper(ALPHABET)); //Later on, find out how to toupperandlower for 2 words, toupperlower everything, etc....
	printf("%c is now small-lized\n", tolower(ALPHABET)); //in this file, you also learn about toupper and its opposite, tolower	
	//------------------------------------------------------
	char name[]= "Ishak";
	printf("My name is %s\n", name);
	
	strcat(name, " is amazing");
	printf("After strcat my name is %s\n", name); //strcat is adding more str
	strcpy(name, "AFTER STRCOPY");
	printf("After strcpy, my name is %s", name);  //strcpy is like resetting stuffs
	return 0;
}
