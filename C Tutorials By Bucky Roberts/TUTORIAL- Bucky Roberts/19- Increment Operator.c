#include <stdio.h>
#include <stdlib.h>

main()
{
	int a=3, b=7, answer;
	answer = a++ * b;
	printf(" The answer is %d\n", answer);
	
	a=3, b=7, answer;
	answer = ++a * b;
	printf(" The answer is %d\n", answer);	
	
	a=3, b=7, answer;
	answer = a-- * b;
	printf(" The answer is %d\n", answer);		
	
	a=3, b=7, answer;
	answer = --a * b;
	printf(" The answer is %d\n", answer);	
	
	return 0;
}
