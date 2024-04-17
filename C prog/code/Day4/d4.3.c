        #include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;//fact =1 i=1 1<=5 1*1=1
		//fact i=2 2<=5 1*2=2
		// i=3 fact2 3<=5 2*3=6
		//fact=6 i=4 4<=5 6*4=24
		
	}
	printf("Factorial=%d",fact);
}
int fact(int);
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
   printf("Factorial of num %d is %d",num,fact(num));//printf ignored  return value i.e int by the calling function
}
int fact(int n)//1
{
	if(n==0)
	{
		return 1;
	}
	else{
		return(n*fact(n-1));//3*fact(3-1)
	}//2*fact(2-1) 1*fact(1-1)
}
