#include <stdio.h>
#include <stdlib.h>

main()
{
	float TEST=0, SCORE=0, ACC=0, AVR=0;
	
	printf("Enter 0 for your test score when you're done\n\n\a");
	
	do{
		printf("TEST: %.0f\tSCORE: %.2f\tAVR: %.2f\n", TEST, SCORE, AVR);
		
		printf("Enter your test score: ");
		scanf(" %f", &SCORE);
	
		TEST++;					//FOR NOW, AND FOREVER, DO WHILE IS PRETTY WEIRD, NEEDA TYPE TEST++, OR GO TO THE NEXT PASS AND ONLY ON THE NEXT ROUND YOU FIND AVERAGE, ETC.....
				ACC+=SCORE; //JUST REMEMBER DO WHILE IS WEIRD
				AVR= ACC/TEST;	//JUST REMEMBER DO WHILE IS WEIRD

	}while(SCORE!=0);
		
	return 0;
}
