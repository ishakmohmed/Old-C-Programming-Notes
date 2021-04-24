#include <stdio.h>

main()
{
	int x = 10, y = 20;
	x = y = 5;
	x += 2;
	y *= 10;
	y -= 1;
	printf("%d%d", x, y);
}
