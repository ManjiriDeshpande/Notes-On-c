#include<stdio.h>
int add(int,int);//func prototype
void display();
int main()
{
	int n1,n2,a;
	//printf("Enter two number");
	//scanf("%d%d",&n1,&n2);
	//add(n1,n2);//function call //actual parameters
	//add(10,20);
	add(30,40);
	display();
	//a=printf("%d\n",add(50,70));
	//printf("%d",a);
	
}
int add(int n1,int n2)//formal parameters
{
	int add;
	add=n1+n2;
	//return add;
	printf("Addition=%d\n",add);
}
void display()
{
	add(10,20);
}

