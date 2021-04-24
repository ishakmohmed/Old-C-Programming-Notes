//objective, print the thing below
/* 7777777
666666
55555
4444
333
22
1     */
#include <stdio.h>
main()
{
	int row, col;

	for(row=7;row>0;row--){
		for(col=1;col<=row;col++){
			printf("%d", row);
		}
		
		
		printf("\n", row);
	}


	return 0;
}
