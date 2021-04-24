#include <stdio.h>

main()
{
	int kg, gram;
	printf("please key in the value for kg====>");
	scanf("%d", &kg);
	
	gram = kg*1000;
	
	printf("%d kg is equal to %d g", kg, gram);
		
}
