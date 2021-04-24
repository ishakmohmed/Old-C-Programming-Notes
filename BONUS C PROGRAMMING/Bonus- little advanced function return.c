#include <stdio.h>
#include <stdlib.h>
int sum(int x, int y);
int multiply(int a, int b);

main()
{
	printf("Using the sum function, the value is %d\n", sum(1,2));
	printf("Usinf the multiply function the value is %d\n", multiply(1,7));
	
	return 0;
}

	int sum(int x, int y){ //sum is just a variable, youre actually summing in return 
		return x+y; //here, you can write any sort of equation like a-b and that will be the function's function...	
	}
	
	int multiply(int a, int b){ //multiply is just a variable, youre actually multiplying in return
		return a*b; //here, you can write any sort of equation like a-b and that will be the function's function...
	}
