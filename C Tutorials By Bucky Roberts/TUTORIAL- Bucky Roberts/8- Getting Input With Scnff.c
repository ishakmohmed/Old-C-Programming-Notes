#include <stdio.h>
#include <stdlib.h>

main()
{
	char name[20];
	char crush[20];
	int babies;
	
	printf("What is your name?\n");
	scanf("%s", name);
	
	printf("Who is your crush?\n");
	scanf("%s", crush);

	printf("How many babies do you want?\n");
	scanf("%d", &babies);

	printf("%s likes %s and they will have %d babies", name, crush, babies);
		
	return 0;
}
