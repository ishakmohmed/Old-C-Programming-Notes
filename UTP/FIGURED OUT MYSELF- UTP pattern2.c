#include <stdio.h>
main(){
	int row, col;
	for(row=5;row>0;row--){
		for(col=1;col<=row;col++){
			printf("=");
		}
		for(col=5;col>=row;col--){
			printf(">");
		}
		
		printf("\n");
	}
	return 0;
}
/*
	=====>
	====>>
	===>>>
	==>>>>
	=>>>>>
*/
