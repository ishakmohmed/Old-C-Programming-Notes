//OBJECTIVE = USER INPUTS PASWORD WITH UPPERCASE, NUMBER, AND DOLLAR SIGN- AND TELL THEM IF PASSWORD IS RIGHT OR NO
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
main()
{	int i, UPPERCHECKER=0, NUMBERCHECKER=0, DOLLARCHECKER=0;
	char PASSWORD[20]; 
	printf("Input PASSWORD within 20 character, it must have at least 1 UPPERCASE, NUMBER, AND DOLLAR SIGN\n"); 
	gets(PASSWORD);
	//NOTE ^^^^^^^^^^^^^^^^^^^^^^^^^^USE GETS CAUSE IT ACCEPTS SPACES, scanf doesn't
	for(i=0;i<PASSWORD[i];i++){
		if(isupper(PASSWORD[i])){
			UPPERCHECKER=1;
		}
	}
	
	for(i=0;i<PASSWORD[i];i++){
		if(isdigit(PASSWORD[i])){
			NUMBERCHECKER=1;
		}
	}
	
	for(i=0;i<PASSWORD[i];i++){
		if(PASSWORD[i] == '$'){ //REMEMBER IN IF EQUALS MUST BE TWO == NOT = ONLY && && && && '$', NOT "$" cause I guess you're testing 1 character, but idk, but only this works
			DOLLARCHECKER=1;
		}
	}	
	
	if(UPPERCHECKER==1 && NUMBERCHECKER==1 && DOLLARCHECKER==1){
		printf("Good PASSWORD");
	}
	else{
		printf("XXXXXXX WRONG PASSWORD");
	}
	
	return 0;
}
