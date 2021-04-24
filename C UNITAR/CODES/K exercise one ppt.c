#include <stdio.h>

main()
{
	int pH;
	printf("Please enter the pH value of the solution to know its liquid type");
	scanf("%d", &pH);
	
	if (pH > 12){
	printf("The solution is very alkaline");}
		
	else if (pH >= 8 && pH <= 12){
	printf("The solution is alkaline");}
	
	else if (pH == 7){
	printf("The solution is neutral");}
	
	else if (pH >= 3 && pH <= 6){
	printf("The solution is acidic");}
	
	else {
	printf("The solution is very acidic");}
	
	return 0;
}
