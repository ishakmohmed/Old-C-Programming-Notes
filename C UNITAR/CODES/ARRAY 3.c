#include <stdio.h>

 main()
{
	int x[10], y, i; /*local variable*/
	printf("enter the number of data you want to enter: ");
	scanf(" %d", &y);
 	
	for(i = 0; i <y; i++)
	scanf(" %d", &x[i]);

	for(i = 0; i < y; i++)
    printf(" Element x[%d] = %d\n",i, x[i]);

return 0;
}
