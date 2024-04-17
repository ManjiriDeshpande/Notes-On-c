#include<stdio.h>
/* typedef struct student
{
	int rollno;//member of structure
	char name[10];
	//double dnum;
}STUD;*/
/*int main()
{
	 STUD s1={12,"Sonali"};//structure variable
	/*printf("Enter the roll no:-");
	scanf("%d",&s.rollno);
	printf("Enter the name:-");
	fflush(stdin);
	gets(s.name);*/
	//printf("Roll no is=%d\n Name= %s",s1.rollno,s1.name);
	//printf("%d",sizeof(s));
//}
//Union-------------
union student
{
	int rollno;
	//char name[10];
	double dnum;
}s;
int main()
{
/*	printf("Enter the roll no:-");
	scanf("%d",&s.rollno);
	printf("Enter the double number:-");
	 scanf("%lf",&s.dnum);
	 
	printf("Roll no is=%d\n Dnum= %lf",s.rollno,s.dnum);*/
	printf("%d",sizeof(s));
}

