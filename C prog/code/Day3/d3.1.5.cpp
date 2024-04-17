#include<stdio.h>
/*int main()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		 //break;
		 continue;
		 printf("%d\n",i);
			
	}
}
