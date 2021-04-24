#include <stdio.h>
#include <stdlib.h>

typedef float PELAMPUNG; //this is another kinda typedef
main()
{
	PELAMPUNG NUMBER = 7; //look theres no float, but there is, except in another name named pelampung
	printf("A random float would be %.3f", NUMBER);
	
	struct car{
		char carname[50];
	}BIGCAR, SMALLCAR; 	//The important lesson in structure- you can declare BIGCAR, SMALL CAR after the structure ends in header file(or main file), and not necessarily in mail file as struct CAR BIGCAR; 
	
	/*
	ANOTHER LESSON...
	
typedef struct carrrrrrrrrrrrrrrrr{
			char carname[50];
					}car;    //this is not the different types of cars, instead this is a shortere alt of declaring in main, struct carrrrrrrrrrr lamborghini
					
	SO in the main pROGRAM, i declare- - - - - - car lamborghini; instead of struct carrrrrrrrrrrrr lamborghini
	
	*/
}
