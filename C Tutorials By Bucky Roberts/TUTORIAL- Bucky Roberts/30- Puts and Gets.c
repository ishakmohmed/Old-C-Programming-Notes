#include <stdio.h>
#include <stdlib.h>

main()
{
	char catsname[100];
	char catsfood[100];
	char sentence[100]=""; //need to declare empty sentence array everytime you wanna combine stuffs
	
	puts("Cats name?"); //puts adds a new line automatically without \n
	gets(catsname); //FOR NOW USE GETS ONLY FOR CHAR, CHAR, CHAAAAAARRR!!!!!!! Do you mean arrayed char? I mean like usually arent char arrayed?? Hmm... idk man but it works for ARRAYED CHAR like in this file
	
	puts("Cats food?");
	gets(catsfood);  //gets and then right away in bracket, type the variable
	
//	strcat(catsname, catsfood); //you can also add variable with variable without "" marks in strcat
	
	strcat(sentence, catsname);
	strcat(sentence, "loves to eat");
	strcat(sentence, catsfood);
	
	puts(sentence); //you can puts(sentence), or in other instances you can puts("ldfkjbdoiguliu");
	return 0;
}
