//SWAPING OF TWO NUMBERS
# include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swaping, the numbers are %d and %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n After swaping, the numbers are %d and %d",a,b);
	return 0;
}
