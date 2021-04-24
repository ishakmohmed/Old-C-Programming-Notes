#include <stdio.h>
#include <stdlib.h>
void PassByValue(int i);
void PassByReference(int *i);
main()
{
	int tuna = 69; //introduction/declaration of tuna
	
	PassByValue(tuna);
	printf("Passing by value, tuna is %d\n", tuna);
	
	PassByReference(&tuna); // R E M E M B E R - ITS ALWASY &SOMETHING for PASSBYREFERENCE
	printf("Passing by reference, tuna is %d\n", tuna);
	
	return 0;
}


void PassByValue(int i){ //just create i, tuna can be a whole new thing that you introduce later on above...
	i = 90;
	return;
}

void PassByReference(int *i){ //ALWAYS A POINTER of maybe PASSBYVALUE'S variable (I mean it works)//reference is memory address
	*i = 80;
	return;
}
