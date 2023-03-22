#include<stdio.h>
main()
{
	int a;
	printf("Enter year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is leap year",a);
		printf("\n%d is next leap year after %d",a+4,a);
	}
	else if(a%4==1)
	{
		printf("%d is not a leap year",a);
		printf("\n%d is previous leap year before %d",a-1,a);
	}
	else if(a%4==2)
	{
		printf("%d is not a leap year",a);
		printf("\n%d is previous leap year before %d",a-2,a);
	}
	else if(a%4==3)
	{
		printf("%d is not a leap year",a);
		printf("\n%d is previous leap year before %d",a-3,a);
	}
	else
	{
		printf("%d is not a leap year",a);
		printf("\n%d is previous leap year before %d",a-5,a);
	}
}
