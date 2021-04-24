#include <stdio.h>

main ()
{
	int noStudents, noCourses, sID, Marks1, Marks2, Marks3, tMarks, aMarks;
	
	printf("SIMPLE GRADING SYSTEM\n");
	
	printf("\nEnter no. of students: ");
	scanf("%d", &noStudents);
	
	printf("\nEnter no. of courses: ");
	scanf("%d", &noCourses);
	
	printf("\n\t>>Enter student ID: ");
	scanf("%d", &sID);
	
	printf("\n\t>>Enter marks for %.d: ", sID);
	

	printf("\n\t\tEnter mark for course #1: ");	
	scanf("%d", &Marks1);
		if (Marks1 <= 39){
		printf("\t\tGrade: F\n");}
		
		else if (Marks1 >= 40 && Marks1 <= 49){
		printf("\t\tGrade: E\n");}
	
		else if (Marks1 >= 50 && Marks1 <= 59){
		printf("\t\tGrade: D\n");}
	
		else if (Marks1 >= 60 && Marks1 <= 69){
		printf("\t\tGrade: C\n");}
	
		else if (Marks1 >= 70 && Marks1 <= 79){
		printf("\t\tGrade: B\n");}
	
		else {
		printf("\t\tGrade: A\n");}
		
		
	printf("\n\t\tEnter mark for course #2: ");	
	scanf("%d", &Marks2);
	
		if (Marks2 <= 39){
		printf("\t\tGrade: F\n");}
		
		else if (Marks2 >= 40 && Marks2 <= 49){
		printf("\t\tGrade: E\n");}
	
		else if (Marks2 >= 50 && Marks2 <= 59){
		printf("\t\tGrade: D\n");}
	
		else if (Marks2 >= 60 && Marks2 <= 69){
		printf("\t\tGrade: C\n");}
	
		else if (Marks2 >= 70 && Marks2 <= 79){
		printf("\t\tGrade: B\n");}
	
		else {
		printf("Grade: A\n");}
		
	
	printf("\n\t\tEnter mark for course #3: ");	
	scanf("%d", &Marks3);
	
		if (Marks3 <= 39){
		printf("\t\tGrade: F\n");}
		
		else if (Marks3 >= 40 && Marks3 <= 49){
		printf("\t\tGrade: E\n");}
	
		else if (Marks3 >= 50 && Marks3 <= 59){
		printf("\t\tGrade: D\n");}
	
		else if (Marks3 >= 60 && Marks3 <= 69){
		printf("\t\tGrade: C\n");}
	
		else if (Marks3 >= 70 && Marks3 <= 79){
		printf("\t\tGrade: B\n");}
	
		else {
		printf("\t\tGrade: A\n");}
		
		tMarks = Marks1 + Marks2 + Marks3;
		printf ("\n\t\tTotal Marks = %d", tMarks);
		
		aMarks = (Marks1 + Marks2 + Marks3)/3;
		printf ("\n\t\tAverage Marks = %d", aMarks);
		
		
		if (aMarks>= 40){
		printf("PROCEED TO NEXT SEMESTER");}
		
		else {
		printf("DONT PROCEED");}
}
