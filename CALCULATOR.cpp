//IMPLEMENTATION OF CALCULATOR
# include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("Enter your choice of mathematical operators in '+,-,*,/':");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
		         printf("Sum=%d",c);
		         break;
		case'-' :c=a-b;
		        printf("Difference=%d",c);
		        break;
		case'*' :c=a*b;
		        printf("Multiplication=%d",c);
		        break;
		case'/':c=a/b;
		        printf("Division=%d",c);
				break;
		default:printf("Invalid choice");		        
	}
	return 0;
}
