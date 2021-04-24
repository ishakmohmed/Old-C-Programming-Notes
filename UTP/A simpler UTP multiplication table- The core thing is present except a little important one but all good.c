#include <stdio.h>
main()
{	int row, col, r, c;
	printf("Enter row and column >>>>\n");
	scanf("%d%d", &row, &col);

	for(r=1;r<=row;r++){
		for(c=1;c<col;c++){ //initially it was c<=col, but i changed to c<col and it worked like I wanted
			printf("%d\t",r*c);
		}
		printf("%d\n",r*c);
	}
	
	return 0;
}
