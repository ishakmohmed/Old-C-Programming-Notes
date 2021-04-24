#include <stdio.h>
#include <stdlib.h>

main()
{
	int * points;
	
	points = (int *) malloc(7 * sizeof(int));
	
	free(points);
	
	return 0;
}
