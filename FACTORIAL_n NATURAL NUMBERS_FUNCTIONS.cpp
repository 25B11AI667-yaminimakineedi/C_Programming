#include<stdio.h>
void factorial(int);
void num(int);
int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	factorial(n);
	num(n);
	return 0;
}
void num(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i);
	}
}
void factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
	  fact=fact*i;
	}
	printf("\n Factorial of %d= %d",n,fact);
}
