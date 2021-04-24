#include <stdio.h>
#include <conio.h>

int main()

{
	char name[7];
	name[0] = 'A';	
	name[1] = 'S';		
	name[2] = 'H';		
	name[3] = 'R';		
	name[4] = 'A';		
	name[5] = 'F';		
	name[6] = '\0';		//null   also end of word text
	name[7] = 'X';	
	
	printf("My name is %s", name);
	printf("8th letter is %c", name[7]);
	
	return 0;
}

