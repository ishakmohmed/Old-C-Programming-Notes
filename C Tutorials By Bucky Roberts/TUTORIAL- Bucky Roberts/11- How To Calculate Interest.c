#include <stdio.h>
#include <stdlib.h>

main()
{
	int views = 100;
	
	views += 100;
	printf("Views = %d", views);
	
	float balance = 15000.0;
	balance *= 0.5;
	printf("\nBalance is %.2f", balance);
	balance *= 0.5;
	printf("\nBalance is %.2f", balance);	
	balance *= 0.5;
	printf("\nBalance is %.2f", balance);	
	balance *= 0.5;
	printf("\nBalance is %.2f", balance);	

	return 0; 
}
