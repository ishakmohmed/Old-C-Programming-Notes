//objective: Specify each player, with respective goals, games played, and PremierLeague points in individual arrays and then display the best player based on points...
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
main()
{
	int i;
	int Players[5]={1, 2, 3, 4, 5}; 
	int BestPlayer;
	int Goals[5]={23, 22, 28, 25, 20};
	int Games[5]={28, 28, 28, 28, 28};
	float PremierLeaguePoints[i]; //I guess for float and int (also char?) arrays needa declare size of array if no put i(the counter) in it....
	float BESTPOINT = 0;
	
	for(i=0;i<5;i++){
		PremierLeaguePoints[i] = (float)Goals[i]/(float)Games[i];
		printf("%d \t %d \t %d \t %.2f\n", Players[i], Goals[i], Games[i], PremierLeaguePoints[i]);
		
			if(PremierLeaguePoints[i]>BESTPOINT){
		BESTPOINT = PremierLeaguePoints[i];
		BestPlayer = Players[i];
	}
	}
	printf("\nThe best player is player #%d", BestPlayer);
	return 0;
}
