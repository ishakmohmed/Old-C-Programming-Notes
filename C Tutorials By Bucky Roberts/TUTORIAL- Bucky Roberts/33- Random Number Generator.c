#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	int x, dice;
	
	for(x=1;x<=10;x++){
		dice=(rand()%6) +1; //i want random 1 to 6, (so rand()%6) + 1, without +1, 0 is counted, with +1, you're kinda lifting the range so 0 not counted
		printf("%d\n", dice);
	}

	return 0;
}
