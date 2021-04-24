#include <stdio.h>
#include <stdlib.h>
int recursion(TESTNUMBER);

main()
{
	int ANYNUMBER = 5;
	printf("The value after recursion in %d", recursion(ANYNUMBER));

	return 0;
}


int	recursion(TESTNUMBER){
	if(TESTNUMBER==0){
		return 1;
	}
	else{
	return TESTNUMBER * (TESTNUMBER-1);
		}
}
