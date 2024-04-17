#include<stdio.h>
int main()
{
	int total,m1,m2,m3,m4,m5;
	float per;
	printf("Enter the 5 subject marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=(float)total/5; //typecasting
	printf("Total=%d\n",total);
	printf("Per=%f\n",per);
	if(per>=85)
	{
		printf("A Grd");
	}
	else if(per<85 && per>=75)
	{
		printf("B+ grd");
		
	}
	else if(per<75&& per>=65)
	{
		printf("B grd");
	}
	else if(per<65 && per>=45)
	{
		printf("C grd");
	}
	else if(per<45 && per>=35)
	{
		printf("D grd");
	}
	else 
	{
		printf("Fail");
	}
	
	
	
}
