#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float number=9.9934343434343434342214, happy=2.11111111;
	
	printf("number is %.2f\n", floor(number)); //floor only takes float variables in its bracket
	printf("happy is %.7f\n", floor(happy)); //7 dp but answer is still 2, floor is like going down the floor which is usually down heh heh heh


	printf("number is %.2f\n", ceil(number)); //2 dp but answer is still 10, ceil is like ceiling
	printf("happy is %.19f\n", ceil(happy)); //19 dp but answer is still 3
	
	return 0;
}
