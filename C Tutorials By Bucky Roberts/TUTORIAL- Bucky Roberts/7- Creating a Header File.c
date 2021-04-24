#include <stdio.h>
#include <stdlib.h>
#define WEIGHT "70 kg"
#define PI 3.1415926 //LOOK HERE, I DEFINED PI WITHOUT "" SO IT COUNTS AS NUMBER, IF NO, STRING (CAN'T %.3F LATER ON DOWN THERE)
#include "JustAHeaderFile.h" //Refer note below this LINE PLEASE PLEASE PLEASE PLEASE
/*
#define MYNAME "Ishak"   <<< HOw i defined in the header file
#define MYAGE 20		<<<< How i defined in the header file

NOTE: TO CREATE A HEADER FILE, NEW PROJECT > UNDER BASIC > CONSOLE APLICATION > CHOOSE C LANGUAGE > THEN CREATE AS "FILENAME".h
Then, #include ""JustAHeaderFile.h"
*/
main()
{
	
	printf("My weight is %s\n", WEIGHT);
	printf("The value of Pi is %.3f\n", PI); //SEE, PI IS DEFINED AS NUMBER UP THERE, SO I CAN CUSTOMIZE MY D.P. OUTPUT
//----------------------------------------------------------------------------------------------------------------------
	printf("My name is %s\n", MYNAME);
	printf("My age is %d", MYAGE);
	return 0;
}
