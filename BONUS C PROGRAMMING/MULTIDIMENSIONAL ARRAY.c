#include <stdio.h>
#include <stdlib.h>
main()
{
	int ARAY[4][2]; //[row ][column]
	int i, j;
	
	for(i=0;i<4;i++){ //row
		for (j=0;j<2;j++){ //column
			scanf("%d", &ARAY[i][j]);
		}
	}
	
	for(i=0;i<4;i++){ //row
		for (j=0;j<2;j++){ //column
		printf("%d\t", ARAY[i][j]);
	}
	}
	
	
	return 0;
}
