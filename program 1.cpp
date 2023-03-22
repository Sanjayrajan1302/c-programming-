//write a program to check the given year is leap year or not if it is a leap year print the next leap year if it a non leap year print previous leap year.

#include<stdio.h>
int main()
{
	int year;
	printf("enter a year: ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("entered year is a leap year: %d",year);
	    printf("\nthe next leap year is : %d ",year+4);
	}
	else if (year%4==1)
	 {
	    printf("it is not a leap year %d : ", year );
	    printf("\n the previous leap year is :%d ",year-1);
	 } 
    else if (year%4==2)
    
     {
		printf("it is not a leap year : %d", year );
	    printf(" \n the previous leap year is :%d ",year-2);
	 }
	else if (year%4==3)
	 {
	   printf("it is not a leap year : %d", year );
	    printf(" \n the previous leap year is : %d ",year-3);
     }
     return 0;
	 
}

