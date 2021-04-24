#include <stdio.h>
#include <stdlib.h>

main()
{
	int pricepumpkin = 13, numbersold = 10, numberofdaysworked = 7;
	float AVRprofit;
	
	
	AVRprofit = ((float)pricepumpkin*(float)numbersold)/(float)numberofdaysworked; //The reason im adding float is that when i looked at the entire line including the AVRprofit, the elements arent of the same data type including AVRprofit
	printf("The average is %.2f", AVRprofit);
	
	return 0;
}
