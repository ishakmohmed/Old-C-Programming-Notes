#include <stdio.h>

main()
{
	int foodchoiceinnumber;
	printf("JUST KEY IN 1 OR 2 OR 3");
	scanf("%d", &foodchoiceinnumber);
	

	
	switch(foodchoiceinnumber)
			{
		case 1: printf("You choose food ONE");
		break;
		
		case 2: printf("You choose food TWO");
		break;
		
		case 3: printf("You choose food THREE");
		break;
		
		default: printf("YOU DID NOT CHOOSE WHAT I EXPECTED");
		break;
		
			}
											// BUT DO YOU NEEDA ACTUALLY RETURN 0 THOUGH?? TELL ME ISHAK, ARRRGGHHHHHH....!!!!!!! I MEAN LIKE IF YOU CAN USE IT, USE IT!
	return 0;
}
