//ok here's the deal, you wanna heap in this program... So heres the objective- first ask the user how many numbers the user wanna average
//then you heap or allocate memory according to the number of times, which is the main thing in this program
//then display average

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{	
	int i, TOTAL=0; //COME ON THIS IS OBVIOUS- NEEDA INITIALIZE TOTAL so that line 27 works, which is total+=heap[i];
	int HOWMANY;
	float AVERAGE;
	int * HEAP; //I guess to do heap you needa declare a variable (ex: HEAP) first with a star infront of it, later on do the malloc thing after HEAP = 
	//and in this case ^ this heap is like the main thing, the main input from user, and it makes sense cause you wanna malloc the main thing, not the useless ones
	printf("Well, how many times do you wanna average?\n");
	scanf(" %d", &HOWMANY);
	
	HEAP = (int *) malloc(HOWMANY * sizeof(int)); //NEEDA FREE HEAP BEFORE RETURN 0;
	
	printf("Just type those numbers between enter(s)\n");

	for(i=0;i<HOWMANY;i++){
		scanf(" %d", &HEAP[i]); //I guess this can turn to array cause it has got star infront of it when you declared it, plus its in for loop, so yeah
		TOTAL += HEAP[i];
	}
	AVERAGE = (float)TOTAL/(float)HOWMANY;
	printf("THE AVERAGE IS %.2f", AVERAGE);
	
	free(HEAP);
	return 0;
}
