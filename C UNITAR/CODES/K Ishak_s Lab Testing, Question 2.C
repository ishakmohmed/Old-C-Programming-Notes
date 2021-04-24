#include<stdio.h>
 
int main()
{
	float AVERAGE, a, b, c, SUM;
   
	printf("Input three different integer: ");
	scanf("%f%f%f", &a, &b, &c);
   
	SUM = a + b + c;
	printf("\tSum is %.0f\n", SUM);
   
	AVERAGE = (SUM / 3);
	printf("\tAverage is %.2f\n", AVERAGE);
   
   
   // IF A IS SMALLER THAN B AND ALSO C, THEN A IS SMALLEST, , , , ,  ,  , , , , IF A IS BIGGER THAN B AND ALSO C, THEN A IS LARGEST.
    if (a < b)
    	{
        	if (a < c)
        	{
            printf("\tSmallest is %.0f\n", a);
        	}
        	else
        	{
            printf("\tSmallest is %.0f\n", c);
        	}
    	}
    		else if (b < c)
        	printf("\tSmallest is %.0f\n", b);
    		else
        	printf("\tSmallest is %.0f\n", c);        
    
    if (a > b)
		{
        	if (a > c)
        	{
            printf("\tLargest is %.0f\n", a);    
        	}
        	else
        	{
        	printf("\tLargest is %.0f\n", c);
        	}
    	}
    		else if (b > c)
        	printf("\tLargest is %.0f\n", b);
    		else
        	printf("\tLargest is %.0f\n", c);
    return 0;    
}
