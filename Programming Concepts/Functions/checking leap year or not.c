//Program to write a function and determine whether the entered year is leap year or not by user's choice

#include<stdio.h>
void leapyear(int); //function_prototype_declaration
int main()
{
	int year;
	printf("Enter the year:- \n");
	scanf("%d",&year);
	leapyear(year); //function call
	return 0;
 }
 
 void leapyear(int year) //function definition  
 {
 	if(year%4==0 && year%100!=0 || year%400==0)
 	printf("%d is a leap year\n",year);
 	else
 	printf("%d isn't a leap year\n",year);
  } 

/* Pseudocode:-  
                            if year is divisible by 400 
                            then is_leap_year 
                            else if year is divisible by 100 then not_leap_year
                            else if year is divisible by 4 then is_leap_year
                            else not_leap_year*/
