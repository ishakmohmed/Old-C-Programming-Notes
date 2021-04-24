#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "44.5- Header44.h"

main()
{
	struct EMPLOYEES Stark;
	struct EMPLOYEES Parker;

	puts("What is starks FNAME?");
	gets(Stark.FNAME); //gets for char, gets for char, gets for char, gets for char, gets for char only for now, FFFFOOOORRRR NOW!!!
	puts(Stark.FNAME); 
	
	puts("What is parker FNAME and ID?");
	gets(Parker.FNAME);
			scanf(" %d", &Parker.ID); //Oh wait, I remember- In one of the previous files i wrote for now use gets for char, char , charrrrrrrr
	
	
		printf("Well parkers first name is %s and Parkers ID is %d \n Just remember gets for char only for now", Parker.FNAME, Parker.ID);
	return 0;
}
