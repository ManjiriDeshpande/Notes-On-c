#include<stdio.h>
//void display(int[]);
void display(int *);//pointer notation
void accept(int []);//subscript notation
int main()
{
int arr[5];
accept(arr);
	//int arr[]={10,20,30,40,50};
	display(arr);
}
/*void display(int a[])
{
int i;
for(i=0;i<5;i++)
{
	printf("%d\t",a[i]);
	}	
}*/
void display(int *a)
{
int i;
for(i=0;i<5;i++)
{
	//printf("%d\t",a[i]);valid
	printf("%d\t",*(a+i));
	}	
}
void accept(int arr[])
{
	int i;
	printf("Enter 5 elements");
	for(i=0;i<5;i++)
{
	 
	//scanf("%d",arr+i);
	scanf("%d",&arr[i]);
	 
	}
}
