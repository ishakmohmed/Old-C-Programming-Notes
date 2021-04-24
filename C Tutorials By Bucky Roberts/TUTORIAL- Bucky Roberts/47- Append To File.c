#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE * fPointer;
	fPointer = fopen("46.1- Pre Text File for 46.txt", "a"); //i wanna add or the real word is append, so "a", and then right away i fprintf(left, right);
	
	fprintf(fPointer, "\n************NOTE: ONLY THIS LINE IS ADDED FROM FILE 47"); //Simple logic \n everytime you wanna add in new line cause itll start with the last line that is present when you wanna add stuff in notepad
	fprintf(fPointer, "\nHeres another line");
	
	
	fclose(fPointer);
	return 0;
}
