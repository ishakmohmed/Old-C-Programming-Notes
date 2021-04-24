#include <stdio.h>

float Triangle (float, float);

 main ()
{
	float total;
	total = Triangle (5,7);
	printf("The area of the Triangle is %.2f\n", total);
	return 0;			
}




float Triangle (float b, float h)
	{
	return 0.5*b*h;	
	}
	

