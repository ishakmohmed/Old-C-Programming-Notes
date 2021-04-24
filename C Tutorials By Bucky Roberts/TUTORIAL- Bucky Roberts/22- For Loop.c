#include <stdio.h>
#include <stdlib.h>

main()
{
	int chicken;
	
	for(chicken=0;chicken<=500;chicken+=10){ //chicken+=10 not just chicken+10, its just how it is...
		printf("Chicken is %d\n", chicken);
	}	
	
	//you can also reset chicken=0 here but I didn't do it cause itll be reset inside the for bracket
	for(chicken=0;chicken<=10;chicken++){
		printf("Chicken is %d\n", chicken);
	}		
	
	return 0;
}
