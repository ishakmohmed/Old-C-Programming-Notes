#include<stdio.h>
int FEKKTORIYAL(int TESTNUMBER);
main()
{
	int TESTNUMBER = 5;
	printf("The value of factorial of %d is %d", TESTNUMBER, FEKKTORIYAL(TESTNUMBER));

	return 0;
}

int FEKKTORIYAL(int TESTNUMBER){
	if(TESTNUMBER==0)   				//no bracket cause only 1 if, but up to you if you wanna add
		return 1; //1 is literally the answer cause 0! is equals to 1
	else								//no bracket cause only 1 else, but up to you if you wanna add
	return TESTNUMBER * FEKKTORIYAL(TESTNUMBER-1);
	
}
