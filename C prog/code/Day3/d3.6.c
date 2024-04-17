#include<stdio.h>
//function without parameter without return value
/*void addition();//function prototype/declaration
int main()
{
	
	addition();//calling of function
	addition();
	addition();
	
}
void addition()//function defination
{
	int n1=10,n2=20,add;
	add=n1+n2;
	printf("Addition is=%d",add);
	
}*/
//------------------------------------------------
//function with parameter without return value
/*void addition(int,int);//function prototype/declaration
int main()
{
	
	addition(10,20);//calling of function
	addition(30,40);
	addition(50,60);
	
}
void addition(int n1,int n2)//function defination
{
	int add;
	add=n1+n2;
	printf("Addition is=%d\n",add);
	
}*/
//---------------------------------------------------------
//function without parameter with return value
/*int addition();//function prototype/declaration
int main()
{
	
	 int ans;
ans=addition();
printf("Addition is=%d\n",ans);
	
}
int addition()//function defination
{
	int n1=50,n2=40;
	int add;
	add=n1+n2;
	 return add;//return single value
	
}*/
//------------------------------------------------------------------
//function with parameter with return value
int addition(int,int);//function prototype/declaration
int main()
{
	
	 int ans;
	 int n1=50,n2=40;//actual parameter
ans=addition(n1,n2);
printf("Addition is=%d\n",ans);
	
}
int addition(int n1,int n2)//formal parameter //function defination
{
	
	int add;
	add=n1+n2;
	 return add;//return single value
	
}
