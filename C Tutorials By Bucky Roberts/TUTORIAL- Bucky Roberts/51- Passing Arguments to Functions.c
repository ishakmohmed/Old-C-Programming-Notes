#include <stdio.h>
#include <stdlib.h>
void MONEYCONV(float USD); //4- OBVIOUSLY, ACTUALLY THIS IS NOT NUMBER 4- , but you get the idea...
main()
{
	float USD1= 100.5; //5- First testing value, also float SOMETHING so that I can pass it
	float USD2= 200.5; //6- Second testing value, also float SOMETHING so that I can pass it
	
	MONEYCONV(USD1); //5.5- I passed it here, JUST USD1, NOT FLOAT USD1
	MONEYCONV(USD2); //6.5- I passed it here, JUST USD2, NOT FLOAT USD2
	MONEYCONV(300.5); //7(LAST)- considering the fact that initially the bracket holds float USD, I passed the number value right away
	
	return 0; 
}

void MONEYCONV(float USD){ //1- Reason I declared float USD here- so that I can pass testing values in main() as float USD, if I pass float 50, it becomes float 50 USD
	float MYR = USD*4.34; //2- NEEDA DECLARE THE OTHER ONE OBVIOUSLY
	printf("%.2f USD = %.2f MYR\n", USD, MYR); //3- OBVIOUSLY 
	return;
}
