#include <stdio.h>
#include <stdlib.h>
//THIS IS INCREDIBLY SIMPLE
//DECLARE VARIABLE OUTSIDE, CAN BE USED IN ALL FUNCTIONS INCLUDING MAIN AND OTHERS- THIS IS CALLED GLOBAL VARIABLE
//DECLARE VARIABLE INSIDE A SPECIFIC FUNCTION, ONLY THAT FUNCTION CAN USE IT- THIS IS CALLED A LOCAL VARIABLE
//^^^^^^^^^JUST LIKE WHAT JONATHAN TOLD YOU IN PROGRAMMING CLASS MONTHS AGO
void MYFIRSTFUNCTION();
int x=1000; //THIS IS GLOBAL VARIABLE, LOCAL IS PRESENT IN A FUNCTION AND CAN ONLY BE USED BY THAT FUNCTION
main()
{
	printf("Tbh, whatever you wanna achive there are %d number of ways/opportunities to do so\n", x);
	ISHAKSFUNCTION();
	return 0;
}

void ISHAKSFUNCTION(){
	printf("Tbh, whatever you wanna achive there are %d number of ways/opportunities to do so\n", x);
	return;
}

