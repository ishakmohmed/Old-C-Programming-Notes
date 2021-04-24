#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//user rolls 3 dice, and it prints out the total to them
//Then user guesses if its gonna be higher, same, lower for the next round,
	//use H, L, S, 
//if correct printf, if wrong print f

main()
{	
	int i;
	int DICE[3];
	int DICE2[3];
	int TOTAL=0, SECONDTOTAL=0; //ALWAYS INITIALIZE TOTAL
	char HLS[3];
	
	for(i=0;i<3;i++){
		DICE[i] = (rand()%6) + 1;
		printf("Dice Roll is %d\n", DICE[i]);
		TOTAL+=DICE[i];
	}
	
	printf("Well, your total is %d, but guess the next total- H for higher, L for Lower, S for Same\n", TOTAL);
	scanf(" %c", &HLS[i]);
	
		for(i=0;i<3;i++){
		DICE2[i] = (rand()%6) + 1;
		printf("Second Dice Roll is %d\n", DICE2[i]);
		SECONDTOTAL+=DICE2[i];
	}
	printf(" SECOND TOTAL IS %d", SECONDTOTAL);
	
	if(HLS[i]=='H'){
		if(SECONDTOTAL>TOTAL){
			printf("you said H, YOURE RIGHT");
		}
		else{
			printf("you said H, YOURE WRONG");
		}
	}
		if(HLS[i]=='L'){
		if(SECONDTOTAL<TOTAL){
			printf("you said L, YOURE RIGHT");
		}
		else{
			printf("you said L, YOURE WRONG");
		}	
			}
	
		if(HLS[i]=='S'){
		if(SECONDTOTAL==TOTAL){
			printf("You said S, YOURE RIGHT");
		}
		else{
			printf("You said S, YOURE WRONG");
		}
}
	return 0;

}
