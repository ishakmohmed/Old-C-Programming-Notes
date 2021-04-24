#include <stdio.h>
#include <stdlib.h>

main()
{
//There are 2 different types- Sequential access file and Random access file
//Lets do sequential
	FILE * fPointer; //File, Pointer, Named as fPointer
//w = write, r = read existing, a = add more crap to file, means append or pretty much add
	fPointer = fopen("45.5- I Wrote a New Text File.txt", "w"); //w cause the file doesn't exist yet
	fprintf(fPointer, "Text that I wrote(If i edit this part in the source code, it'll overwrite)\n"); //fprintf- prints to file //I can change this to whatever I want and it'll overwrite

	fclose(fPointer);	
	return 0;
}
