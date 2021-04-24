#include <stdio.h>
#include <stdlib.h>

main(){
	char answer;
	
	printf("Yes or No (Y/N)?");
	scanf(" %c", &answer);
	
	if (answer == 'Y'|| answer == 'N'){
		printf("You keyed in Y or N");
	}
	
	else{
		printf("Wear your glasses!");
	}
	
	return 0;
}
