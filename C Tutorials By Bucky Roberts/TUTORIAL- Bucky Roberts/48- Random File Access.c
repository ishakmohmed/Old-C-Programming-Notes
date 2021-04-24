#include <stdio.h>
#include <stdlib.h>
//objective- first you wanna w+(not a, r, or w only)- this means write first and then read
//Then write a line of sentence
//then change it from the beginninf
//then change it from the end
//the housekeeping 
main()
{
	FILE * fPointer;
	fPointer = fopen("48.5- Text file.txt", "w+"); //w+ means write and then read, kinda confusing why Im using it...
										//^^^ BTW, only w works too in this file, I guess it makes sense cause you're only writing stuffs and not reading anything
	
	fputs("I am ???", fPointer);	//I guess the alternatice would be fprintf but idk
	
	fseek(fPointer, 4, SEEK_SET);
	fputs(" Mohmed Something", fPointer);
	
	fseek(fPointer, -9, SEEK_END);
	fputs(" Ishak and I am amazing", fPointer); //instead of Ishak and....., if you write something short like Ishak only, Ishak will be present, but after that, since ishak is too short, whatever that was present initially continue to print, so in this case if you write ishak only, then the output will be ishaking, and the additional ing is from the word something above.......
	
	fclose(fPointer);
	return 0;
}
