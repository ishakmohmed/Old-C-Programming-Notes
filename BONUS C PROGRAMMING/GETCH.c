#include <stdio.h>
#include <stdlib.h>
main()
{
	int a;
	printf("Enter value of a\n");
	scanf(" %d", &a);
	printf("Value: %d", a);
	getch(); //its pretty silly, rerun the program if you forget how it works
	return 0;
}
