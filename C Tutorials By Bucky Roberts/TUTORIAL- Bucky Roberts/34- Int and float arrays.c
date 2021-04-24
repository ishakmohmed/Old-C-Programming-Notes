//Before i code, i wanna specify what this code is gonna do. 1- Ask how many MB you ate from day 1 to 5 (5 times), 2- Display total, and average per day
//N    O    T    E: The only thing that I think is different in this file is that now you're using int arrays, so meatBalls[i], where i is the counter
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	int i, NOMeatballs[5]; //int array- so NOMeatball[i] > I guess throughout the whole program, I guuess for float too...
	float TOTALMeatballs, Average;
	
	for(i=0;i<5;i++){
		printf("Hmmm... So, how many meatballs did you eat on day %d, huh?\n", i+1);
		scanf(" %d", &NOMeatballs[i]); //for every NOMeatballs variable in this file, i added [i], which MIGHT be the counter because i specified number of meatballs up there, which is called int arrays, if i remove i, then needa remove the specified number of meatballs, leaving the variable up there and throughout the file as NOMeatballs only...
		TOTALMeatballs+=NOMeatballs[i];
	}	
	Average = TOTALMeatballs/5;
	printf("\nResult>>> Total meatballs consumed: %.2f, Average per day: %.2f", TOTALMeatballs, Average);	
	return 0;
}
