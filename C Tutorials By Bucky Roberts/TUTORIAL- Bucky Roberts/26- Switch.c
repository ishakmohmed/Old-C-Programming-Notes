#include <stdio.h>
#include <stdlib.h>

main()
{
	char grade;
	
	printf("Enter your grade from A-C");
	scanf(" %c", &grade);
	
	switch(grade){
		case 'A': printf("You got an A"); 
		break;
		
		case 'B': printf("You got a B"); 
		break;		//For now, test char(1 character) and int only, and its pretty stupid for now to think if float and string would work...
		
		case 'C': printf("You got a C"); 
		break;
		
		default: printf("You got otherwise");
	}

	return 0;
}
