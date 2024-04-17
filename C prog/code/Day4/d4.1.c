#include<stdio.h>
int main()
{
int num=10,num2=20;
int *ptr;
char *p;
char ch='a';
p=&ch;
ptr=&num;//assigning address of num

/*printf("%d\n",num);
printf("%u\n",&num);//address of num
printf("%u\n",&ptr)	;//address of ptr
printf("%d\n",ptr);//address of num
printf("%d\n",*ptr);//value pointed variable*/
//ptr=&num2;
//printf("%d\n",sizeof(num));
//printf("%d\n",sizeof(&num));
//printf("%d\n",sizeof(ptr));
//printf("%d\n",sizeof(*ptr));
printf("%d\n",sizeof(*p));
//printf("%d\n",sizeof(p));
}
