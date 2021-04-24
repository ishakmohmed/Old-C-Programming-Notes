#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE * fPointer; //The same stuff in previous file
	fPointer = fopen("46.1- Pre Text File for 46.txt", "r"); //again same stuff, but this file already exists with multiple lines of texts, so I use "r" to read the file
	
	char READSTORAGE[200]; //To read a file, I need something to store if before it actually reads the file to me, char array would be perfect
	while(!feof(fPointer)){ //while NOT file end of file (fPointer), basically read every line, don't confuse yourself too much please, trust me!
		fgets(READSTORAGE, 200, fPointer); //fgets not gets only //this is fixed (the storage, storage capacity, fPointer)
		puts(READSTORAGE); 
	}
	
	fclose(fPointer); //Housekeeping stuff
	return 0;
}
