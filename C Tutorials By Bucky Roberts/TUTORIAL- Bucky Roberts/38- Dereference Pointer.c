#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	int Hello=1;
	printf("Address \t\t Name \t Value\n");
	
	int *pHello = &Hello; //IN THIS LINE YOU;RE MAKING A POINTER TO Hello, and &Hello pretty much means you're associating the pointer you're creating with Hello...
	printf("%p \t %s \t %d\n", pHello, "Hello", Hello); //here you can use pHello or &Hello
	printf("%p \t %s  %p\n", &pHello, "pHello", pHello);

	printf("\n\n\nValue of *pHello: %d", *pHello);

	*pHello = 99; //This is dereferencing, which is going to the value its taking care of and finding its value, so pHello refers Hello and then its value which is 1..
	//Also, once *pHello is 99, Hello is 99 too...
	printf("\n\n\nValue of *pHello: %d", *pHello); //use ********pHello, maybe, perhaps cause you want the %d number value so needa tranfer the exact variable which is *pHello and not pHello only
         //^Basically, if you wrote %d^, and then you've got options to write *pointer or pointer only, write *pointer to find value that the *pointer takes care of
	printf("\n\n\nValue of Hello: %d", Hello);


	return 0;
}
