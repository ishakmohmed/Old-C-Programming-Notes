#include <stdio.h>
#include <stdlib.h>

main()
{
	int tuna= 'b'; 
	
	if(isalpha(tuna)){
		if(isupper(tuna)){
			printf("%c is an uppercase alpha", tuna);}
		if(islower(tuna)){	//also, you can use else if  //So, you found out that islower is the opposite of isupper
			printf("%c is a lowercase alpha", tuna);}
	}
	
	else if(isdigit(tuna)){
		printf("%c is a digit", tuna);
	}	
	
	else{
		printf("%c is a I DONT KNOW", tuna);		
	}
	
	return 0;
}
