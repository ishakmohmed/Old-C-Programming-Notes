#include <stdio.h>
#include <stdlib.h>
main()
{
	int NUMBERS[20];
	int i;
	int LARGEST = 0;
	
	printf("Input 20 numbers >>>\n");
	scanf( "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &NUMBERS[1], &NUMBERS[2], &NUMBERS[3], &NUMBERS[4], &NUMBERS[5], &NUMBERS[6], &NUMBERS[7], &NUMBERS[8], &NUMBERS[9], &NUMBERS[10], &NUMBERS[11], &NUMBERS[12], &NUMBERS[13], &NUMBERS[14], &NUMBERS[15], &NUMBERS[16], &NUMBERS[17], &NUMBERS[18], &NUMBERS[19], &NUMBERS[20]);
	
	for(i=0; i<20; i++){
		if(NUMBERS[i]>LARGEST){
			LARGEST = NUMBERS[i];
		}
	}
	printf("\nThe largest number is %d", NUMBERS[i]);
	return 0;
}
