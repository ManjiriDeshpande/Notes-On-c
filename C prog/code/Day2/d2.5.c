#include<stdio.h>
/*int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("No.is Even");
	     printf("%d",num);
	}
	

	else
	printf("NO.is ODD");
	
}*/
//-------------ternary op------
int main()
{
int num,res;
	printf("Enter the number");
	scanf("%d",&num);
	(num%2==0)?printf("No.is Even"):printf("No.is ODD");
}
