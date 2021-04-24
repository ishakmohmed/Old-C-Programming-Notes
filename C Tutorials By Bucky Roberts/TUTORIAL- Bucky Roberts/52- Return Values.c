#include <stdio.h>
#include <stdlib.h>
int BONUSCALCULATOR(int yearsWORKED);
main()
{
	int ISHAKSBONUS = BONUSCALCULATOR(10); //WAY 1- DECLARE VARIABLE FIRST AND THEN PRINT IT, BASICALLY THE CLASSIC WAY
	printf("Ishaks bonus is RM %d\n", ISHAKSBONUS); 
	
	printf("Mohmed gets RM %d\n", BONUSCALCULATOR(20)); //PRINT IS RIGHT AWAY, EXCEPT THAT AFTER "", YOU INCLUDE THE FUNCTION WITH THE SPECIFIC YEAR
	
	return 0;
}
//I guess below is just another way to make functions when you have one main thing that the function wanna return (bonus in this case), but IDK..
int BONUSCALCULATOR(int yearsWORKED){ //int yearsWORKED is what the function id dependent on, I guess thats what happens when function is int something
	int BONUS = yearsWORKED*100;
	return BONUS; //return bonus cause the function is int something, so needa say whats the main thing you wanna return, bonus it is, in which bonus is integer...
}					//^^^^^^^^^^^ IN SIMPLE WORDS, if int function, then return int

//if return bonus which is integer, then top left of function it's int too, which makes it int BONUSCALCULATOR(), but inside the bracket ((int yearsWORKED)), it can be float or anyting else
