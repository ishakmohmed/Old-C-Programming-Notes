#include <stdio.h>

main()
{
	int mosh[2][3] = {{1,2,3}, {4,5,6}};
	int row, col;
	
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			printf("%d", mosh[row][col]);
		}
		printf("\n"); //ISHAK, THIS IS THE MOST IMPORTANT PART- needa print \n outside the inner for loop so that you get a nice square-ish matrix just like the multidimensional array exists originally
	}
	
	return 0;
}
