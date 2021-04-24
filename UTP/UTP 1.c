#include <stdio.h>
#include <stdlib.h>

main()
{
	double number;
	
	printf("Enter number > ");
	scanf("%lf", &number); //From some source, it says for long double, use Lf
	printf("\n The number is %f", number); //but when you wanna print double, its %f
	
	return 0;
}
