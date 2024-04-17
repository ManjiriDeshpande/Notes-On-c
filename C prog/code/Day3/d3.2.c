//Maximum of 3 no.//nested if else 
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3); //30 20 40
	if(num1>num2)//outer if      &&
	{
		if(num1>num3)//inner if
		{
			printf("Num1 i.e.%d is greater no.",num1);
		}
		else
		{
		printf("Num3 i.e.%d is greater no.",num3);	
		}
	}
	else
	{
		if(num2>num3)
		{
		printf("Num2 i.e.%d is greater no.",num2);	
		}
		else
		{
		printf("Num3 i.e.%d is greater no.",num3);	
		}
	}
}

