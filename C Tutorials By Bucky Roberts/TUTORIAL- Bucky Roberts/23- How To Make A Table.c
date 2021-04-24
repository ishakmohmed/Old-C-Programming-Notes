#include <stdio.h>
#include <stdlib.h>

main()
{
	int row, col;
	
	for(row=1; row<=10; row++){
		for(col=1; col<=5;col++){
			
			printf("%d\t\t", col);
		}
			
		printf("\n");
	}
	
	return 0;
}
