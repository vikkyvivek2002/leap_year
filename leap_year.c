#include<stdio.h>
#include<math.h>
int main()
{
	int year ;
	printf("ENTER THE YEAR :");
	scanf("%d",&year);
	if((year%400 ==0)&& (year%100 != 0) || (year %4 ==0))
	{
		printf("\n LEAP YEAR ");
	}
	else 
	printf("\n NOT A LEAP YEAR ");
	 return 0;
}