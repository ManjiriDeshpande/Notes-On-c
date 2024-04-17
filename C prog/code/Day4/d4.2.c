#include<stdio.h>
//call by value
/*void swap(int,int);
int main()
{
	int num1=10,num2=20;
	
	printf("Before swapping num1=%d  num2=%d\n",num1,num2);
swap(num1,num2);//actual parameters
printf("After swapping num1=%d  num2=%d\n",num1,num2);
	
}
void swap(int n1,int n2)//formal parameters
{
	int temp;
	temp=n1;//10 10
	n1=n2;//20 20  n1=20
	n2=temp;//10 10 n2=10
printf("After swapping in swap() n1=%d n2=%d\n",n1,n2);	
}*/
//Call by address
void swap(int*,int*);
int main()
{
	int num1=10,num2=20;
	
	printf("Before swapping num1=%d  num2=%d\n",num1,num2);
swap(&num1,&num2);//actual parameters
printf("After swapping num1=%d  num2=%d\n",num1,num2);
	
}
void swap(int *n1,int *n2)//formal parameters
{
	int temp;
	temp=*n1;//10 10
	*n1=*n2;//20 20
	*n2=temp;//10 10
printf("After swapping in swap() n1=%d n2=%d\n",*n1,*n2);	
}


