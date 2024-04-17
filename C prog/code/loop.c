//while loop
#include<stdio.h>
/*int main()
{
int i;
i=1;//intilazation	
while(i<=10)//condition
{
printf("%d\n",i);
i++;//no.of iteration	
}
return 0;
}*/
//-----------For loop---
/*int main()
{
int i;
i=1;
for(;;)//;
{
	if(i<=10)
	{
	printf("%d\n",i);
	i++;
		
	}
	break;		


}

 	
return 0;
}*/

//do--while
/*int main()
{

int i=1;//intilazation	
do//condition
{
printf("%d\n",i);
i++;//no.of iteration	
}while(i>10);
return 0;
}*/
//---multiple intialization
/*int main()
{
	int i,j;
	for(i=10,j=1;i<40,j<6;i=i+10,j++)
	{
		printf("%d\t%d",i,j);
		printf("\n");
	}
}*/
//-----nested for loop
/*int main()
{
int i,j;
for(i=1;i<=5;i++)
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
		{
			//break;
			continue;
		}
		printf("%d\n",i);
		
	}
}

