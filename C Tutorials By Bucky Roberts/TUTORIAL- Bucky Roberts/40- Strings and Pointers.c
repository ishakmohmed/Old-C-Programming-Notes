#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	char Movie[] = "Parasite"; //REMEMBER ITS KINDA HARD TO CHANGE THIS BECAUSE THIS IS LIKE A CONSTANT 
	char *Movie2 = "Knives Out!"; //ITS EASY TO CHANGE THIS BECAUSE THIS IS A POINTER
	
	puts(Movie2); //without *
	
	Movie2 = "SpiderMan"; //without *
	
	puts(Movie2); //without *
	
	return 0;
}
