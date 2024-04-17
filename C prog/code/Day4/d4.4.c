#include<stdio.h>
void display();
 //extern int num=30;//global variable
int main()
{
	auto int num=10;//local variable
	 //int num;
	printf(" num=%d\n",num);
	num++;
	{
		int num=20;//local variable
		printf("within block num=%d\n",num);
	}
	printf("After block num=%d\n",num);
	 display();
}
void display()
{
	printf(" Display() num=%d",num);
}*/
//--------------Static ----------------------------------
int main()
{
	 int num=10;
	register int a;// used as looping varaiable
	//printf("%d",a++);
	//printf("%d",&a);//not allowed
	a=num;
	printf("%d",a);
	//display();
	//display();
	//display();
	
	
}
/*void display()
{
	  static int num=0;
	printf("%d\n",num++);
}*/
