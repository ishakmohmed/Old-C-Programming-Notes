#include <stdio.h>
#include <stdlib.h>

main()
{
	int tuna= '&'; //int and char can be used interchangeably almost all the time in this entire file and also generally in C programming...
					
//Maybe it needs to be in '' because it has got int data type which is supposed to be numbers but I wanna test other stuffs too, for now maybe thats why you can only test 1 character whether its a character, number, or symbol.	
// LATER ON, JUST FIND OUT HOW TO TEST 2 WORDS AND STUff like that < << <<<<    <<<<  <<<<<<<<<<<< <<<<<         <<<<<<<<<<< <<<<<<<<<< <<<<<<<<<<      <<<<<	
	if(isalpha(tuna)){
		printf("%c is an alpha", tuna); //just use %c cause it includes characters and numbers 
	}
	
	else if(isdigit(tuna)){
		printf("%c is a digit", tuna); //just use %c cause it includes characters and numbers 
	}	
	
	else{
		printf("%c is a I DONT KNOW", tuna); //just use %c cause it includes characters and numbers 
	}
	
	return 0;
}
