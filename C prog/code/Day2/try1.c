#include<stdio.h>
int main()
{
	int a=10,b;
	b=a++;//postincrement/postdecrement having less precedence than assignment operotor
	printf("%d",b);
	
}
