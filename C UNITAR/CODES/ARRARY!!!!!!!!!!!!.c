#include <stdio.h>
int main()
{ 
	int marks[]= {}, i,n,sum=0; 

	printf("Enter number of students: "); 
	scanf("%d",&n); 
			for(i=0;i<n;++i)
			{	 
			printf("Enter marks of student%d: ", i+1); 
			scanf("%d",&marks[i]);
 			sum+=marks[i];
			}
			
			
 printf("Sum= %d",sum);
 return 0;
 }
