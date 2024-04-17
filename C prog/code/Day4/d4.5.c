#include<stdio.h>
/*int main()
{
	int marks[5]={10,20,30,40,50},i;//array declaration
	//int marks2[5]={99,44,55,60,70};
	int num;
	
	for(i=0;i<5;i++)
	{
		//printf("%d\t",marks[i]);
		//printf("%d\t",i[marks]);
		printf("%d\t",*(marks+i));
	}
*/ 
	/*printf("\n");
	printf("%d",marks[2]);
	num=marks[4];
	marks=marks2;//not allowed
	marks[1]=marks2[2];
	printf("\n");
	printf("%d",marks[1]);

}*/
//-----using scanf---------------------
 /*int marks[5],i;
printf("Enter the 5 value :-");
for(i=0;i<5;i++)
{
	scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
{
	printf("%d\t",marks[i]);
	}
	printf("\n");
}*/
	//marks[2]=56;
///*printf("%d",marks[2]);*/
//------------------Pointer wit array
int main()
{
int arr[5]={10,20,30,40,50};//bound check not done C 
//int arr[]={10,20,30};
int *ptr;
ptr=arr;
//printf("%d\n",sizeof(arr));
//printf("%d\n",sizeof(ptr));
//printf("%d\n",*(arr+2));//bracket having more precedence than *   560 30 
//printf("%d\n",*arr+2);// 552 10+2
//arr--//invalid
//ptr++;
//printf("%d\n",*(ptr++));
//printf("%d\n",*(ptr));
printf("Base address=%u\n",arr);
//printf("%d\n",ptr+1);
//printf("%d\n",ptr+2);//baseaddres+index*(size of int)
ptr++;
//printf("%d\n",*(ptr+2));// current pointing value +2
 
printf("%d\n",*(arr+2));
//printf("%d\n",(*ptr+2));//12 baseaddress value+2
//p1+p2//invalid(add of two ptr not allowed,multiplication not allowed/division not allowed
//p1-p2//valid gives an integer value depending on how many location /index are apart;
	}

