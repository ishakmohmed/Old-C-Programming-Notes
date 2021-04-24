#include <stdio.h>
#include <stdlib.h>

main()
{
	int tuna=1;
	
	do{
		if(tuna==6 || tuna==8){
			tuna++;
			continue; //THIS ENTIRE IF statement should be last, AND IN THERE, CONTINUE OR IN SIMPLE WORDS IIGGGGNOOOOREEEE SHOULD BE THE VERY LAST THING
		}
		
		
		printf(" %d\n", tuna); //Initially only printf and tuna++ below it is present, but later on you add IGNORE and everything related above it
		tuna++;
		
	}while(tuna<=20);
	
	return 0;
}
