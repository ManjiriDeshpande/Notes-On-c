#include<stdio.h>
/*int main()
{
	 short int num=10;
	 unsigned int n=20;//address are always unsigned
	float fnum=10.6;
	  double dnum=10.45;
	 char ch='a';
	//printf("%d",num);
	printf("%u",n);
	//printf("%d",sizeof(num));
	//printf("%d",sizeof(n));
	//printf("%d",sizeof(fnum));
	//printf("%d",sizeof(10.6));//by defalut it is allocated size for double
	//printf("%d",sizeof(10.6));
	//printf("%d",sizeof(ch));
	//printf("%d",sizeof(double));
	//printf("%d",sizeof(dnum));
	
}*/
//----
/*int main()
{
	int a=10,b;
	//printf("%d",a++);
	//printf("%d",++a);
	b=a++;
	printf("%d",b);
	b=++a;
	
}*/

int main()
{
	int a=5,b=4,res;//0101   
	                // 0100       0100=  4
     //res=a&b;
     res=a|b; 
	            //  0101
	 printf("%d\a",res);	
	
}



