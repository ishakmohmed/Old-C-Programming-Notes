#include <stdio.h>
main()
{
	int row, col;
	for(row=1;row<=5;row++){
		for(col=2;col<=row;col++){
			printf("==");
		}
		printf(">");
		printf("\n");
	}
	
	for(row=4;row>=1;row--){
		for(col=2;col<=row;col++){
			printf("==");
		}
		printf(">");
		printf("\n");
	}

	return 0;
}
/*
print the thing below 

>
==>
====>
======>
========>
======>
====>
==>
>

	*/
