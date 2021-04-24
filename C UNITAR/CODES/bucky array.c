#include <stdio.h>
main()
{
	int bucky[5] = { 21, 18, 47, 21, 4};
	int i;
	int total = 0;
	
	for (i=0; i<5; i++)
	{
		total += bucky[i];
	}
	
	printf("The total number is %d", total);
	
	return 0;
}
