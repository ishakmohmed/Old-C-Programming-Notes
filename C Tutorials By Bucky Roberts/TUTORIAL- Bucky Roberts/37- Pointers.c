#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	int Hello=1;
	printf("Address \t\t Name \t Value\n");
	printf("%p \t %s \t %d\n", &Hello, "Hello", Hello); //I guess this is not a pointer yet, but you wrote &Hello to find the memory address, &means smtg like "THE MEMORY ADDRESS OF"
	
	int *pHello = &Hello; //I wanna declare a new variable as pointer and associate is to the integer variable, Hello
	//^^ IF ONLY HELLO IS DECLARED IN FLOAT UP THERE, THEN THE POINTER MUST BE IN FLOAT TOO.......................................................
	printf("%p \t %s \t %d\n", pHello, "Hello", Hello);
	
	printf("%p \t %s  %p\n", &pHello, "pHello", pHello);

	return 0;
}
