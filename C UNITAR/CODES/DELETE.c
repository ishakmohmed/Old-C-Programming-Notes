#include <stdio.h>
main()
{ int a, b, c;

	a=10;
	b=++a;
	c=a++;
	
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
}
