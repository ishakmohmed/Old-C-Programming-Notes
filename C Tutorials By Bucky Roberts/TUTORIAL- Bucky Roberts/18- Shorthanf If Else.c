#include <stdio.h>
#include <stdlib.h>
main()
{
	char name[20];
	printf("Enter your name:");
	scanf(" %s", name);
	
	(name[0]<'M') ? printf("You're in the first half\n") : printf("You're in the 2nd half\n");
	
	int friends = 1; //if its one, then friend,,,,,,, other than 1, then friendssssssss
	printf("I have %d number of friend%s", friends, (friends!=1)?"s":""); //you can also add long words BUT 
																		  //to add character/words ALWAYS USE %S NOT %C
	return 0;
}
