#include<stdio.h>
int main()
{
	int num;
	char d,e,ch;
	do

	{
	
	printf("Enter the number");
	scanf("%d",&num);
	switch(num)// valid :switch(a>b) switch(d+e-3) call function 
	{
		case 1://in valid case 4.5: case a>b: case a+2: case 1,2,3: case "one": case 1:2:3
			printf("ONE");// valid:=case 'a': case 'a'> 'b':
			break;
			case 2://
				printf("TWO");
				break;
				case 3:
					printf("Three");
					break;
					case 4:
						printf("Four");
						break;
						case 5:
							printf("Five");
							break;
							default:
								printf("Number is greater than 5");
	}
	printf("Do you want to continue? press(Y/N)");
	scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');
}
/*int main()
{
	char ch;
	printf("enter a Character");
	scanf("%c",&ch);
	switch(ch)
	{
		default:
				printf("Consonent");
				break;
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
	    case 'I':
		case 'O':
	    case 'U':
				
			printf("Vowel");
			break;
			
	}
}*/
/*int main()
{
	int num;
	char d,e;
	printf("Enter the number");
	scanf("%d",&num);
	switch(num)
	{
	  
	    default:
	          printf("Invalid choice");
		case 1:
			printf("one");
			case 2:
				printf("Two");
				case 3:
					printf("Three");
					break;
					
					
	}
	return 0;
}*/
