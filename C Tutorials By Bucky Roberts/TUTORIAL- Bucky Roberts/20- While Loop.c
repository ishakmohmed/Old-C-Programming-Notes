#include <stdio.h>
#include <stdlib.h>

main()
{
	int tuna = 1;
	
	while(tuna<5){
		printf("Tuna is %d\n", tuna);
		tuna++;
	}
//---------------------------------------------------------------
	int day=1 ;
	float amount=0.01;
	
	while(day<=31){
		printf("Day:%d\tAmount: RM %.2f\n", day, amount);
		amount *= 2;
		day++;
	}
	
	return 0;
}
