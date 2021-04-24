#include <stdio.h>
main(){
	char SENTENCE[] = {};
	
	printf("Enter SENTENCE WITH SPACES, basically the magic is that ill output it back even if it has spaces");
	scanf("%[^\n]", SENTENCE);
	
	puts(SENTENCE);
	
	return 0;
}
