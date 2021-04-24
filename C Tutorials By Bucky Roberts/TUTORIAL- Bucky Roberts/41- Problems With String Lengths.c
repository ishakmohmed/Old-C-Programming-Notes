#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

main()
{
	char movie[20];
	char *pMovie = movie; //no & before movie because name of array is already a memory address, what im tryna say is that movie is an array.....
	
	puts("What's your movie title, remember if its more than 20 ill cut it");
	fgets(pMovie, 20, stdin); //introduction to fgets, use it when you wanna limit the input charaters, (for now its pointer of the intended variable, character limit, stdin which is like the standard input which is like the keyboard input or something like that)
	puts(pMovie);

	return 0;
}
