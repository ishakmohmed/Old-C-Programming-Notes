#include <stdio.h>
#include <stdlib.h>

main()
{
	int howmany, alpha;
	
	printf("How many times do you want this thing to loop (max is 20)?");
	scanf(" %d", &howmany);
	
	for(alpha=1; alpha<=20; alpha++){
		
		printf(" %d\n", alpha);
		
		
		if(alpha==howmany){
			break;
		}
	}
	
	return 0;
}
