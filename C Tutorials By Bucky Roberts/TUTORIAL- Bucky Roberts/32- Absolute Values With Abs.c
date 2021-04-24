#include <stdio.h>
#include <stdlib.h>

main()
{
	int year1, year2, minus;
	
	puts("Enter year 1"); //puts used to display only strings
	scanf(" %d", &year1); 
	
	puts("Enter year 2");
	scanf(" %d", &year2);
	
	minus= year1-year2;
	printf("The final value is %d\n", abs(minus)); //HERE YOU LEARN ABOUT ABS which is basically modulus

/*ANOTHER	
			IMPORTANT
							THING */
	printf("%.0f\n", pow(2,3)); //ADDITIONALLY, YOU LEARN ABOUT POW(2 things in bracket) AND SQRT(1 thing), you don't needa declare both...
	printf("%.2f\n", sqrt(144));	//REMEMBER, FOR BOTH POW AND SQRT, NEEDA PRINT IN FLOAT, ATLEAST %.0f, if no it wont work...					

	return 0;
}
