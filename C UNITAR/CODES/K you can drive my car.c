#include <stdio.h>

main()
{
	int age;
	printf("please key in the value for age====>");
	scanf("%d", &age);
	
	if (age>=21){
	printf("You can drive my car!");}
	
	else {
	printf("No, you cannot drive now. You're too young!");}		
	
	return 0;
}

