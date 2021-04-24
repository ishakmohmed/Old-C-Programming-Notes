#include <stdio.h>
#include <stdlib.h>

main()
{
	float age1, age2, age3, Average;
	age1=age2=10.0;

	
	printf("What is age 3?");
	scanf("%f", &age3);
	
	Average = (age1+age2+age3)/3;
	printf("The average age is %.2f", Average);
	
	return 0;
}
