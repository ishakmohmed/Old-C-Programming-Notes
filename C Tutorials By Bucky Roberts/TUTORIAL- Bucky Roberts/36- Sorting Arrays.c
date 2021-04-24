#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//OBJECTIVE 1- CREATE A LIST OF 10 RANDOM NUMBERS RANGING FROM 1 TO 25, OBJECTIVE 2- REFER DOWN
main()
{
	int i, DONESWAP, TEMPSTORAGE;
	int RANDNUM[10];
	
	for(i=0;i<10;i++){
		RANDNUM[i] = (rand()%25)+1;
		printf("The random number is %d\n", RANDNUM[i]);
	}
//OBJECTIVE 2- MAKE THE SAME LIST AGAIN, EXCEPT THAT NOW THE LIST IS SORTED ASCENDINGLY...
while(1){							//LESSON = FOR SORTING ARRAYS/BUBBLE SORT, EVERYTHING NEEDA BE IN WHILE(1)'S BRACKETS, EXCEPT AFTER YOUVE FIGURED OUT STUFFS, THEN THE FINAL PRINTING GOES OUTSIDE THEM...
			DONESWAP=0; //REMEMBER WHEN IT COMES TO SORTING STUFFS, FIRST DONESWAP=0 which is true, then false so do again, then true so continue to last step...s
				
			for(i=0;i<10-1;i++){ //REMEMBER ITS 10-1
								if(RANDNUM[i]>RANDNUM[i+1]){ //Basically to sort stuffs, obviosuly needa put everything in while(1)... first DONESWAP=0, then 1 then 0; for the first 0 just declare, for 1 neada do the if first is bigger than 2nd them swap, for third and final 0, its juat an if statemetn with break;
									TEMPSTORAGE = RANDNUM[i];
									RANDNUM[i] = RANDNUM[i+1];
									RANDNUM[i+1] = TEMPSTORAGE;
									DONESWAP = 1;
														   }													   
							   }	
					if(DONESWAP==0){ //put this just before the while(1) loop end curly bracket ends
							break;
						     	}
		}
	for(i=0;i<10;i++){
		printf("The random number in ASCENDING ORDER is %d\n", RANDNUM[i]);	
				   	}	
//FOR DESCENDING ORDER------------ITS THE SAME THING EXCEPT THAT REVERSE IF FIRST>SECOND TO IF FIRST<SECOND NUMBER...
	return 0;
}
