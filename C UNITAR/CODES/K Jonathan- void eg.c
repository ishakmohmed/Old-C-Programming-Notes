#include<stdio.h>
void kgtogram();
void metertocm();

main()
{int ch;
char ans = 'y';

printf("1.kgtogram()\n");
printf("2.metertocm()\n");
while (ans == 'y'){
	
printf("yr choice");
scanf("%d",&ch);
if(ch == 1)
kgtogram();
else if (ch == 2)
metertocm();
else
printf("wrong number");
	printf("end");
 printf("do you want to procede, y yes, n no");
 scanf("%s", & ans);
}
}

void kgtogram()
{int kg,gram;
	printf("pls key in a value in kg");
	scanf("%d",&kg);
	gram = kg *1000;
	printf("%d",gram);
}

void metertocm()
{int meter,cm;
	printf("pls key in a value in meter");
	scanf("%d",&meter);
	cm = meter * 100;
	printf("%d",cm);
	
}
