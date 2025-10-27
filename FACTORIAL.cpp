//FACTORIAL
#include <stdio.h>
int main()
{
	long int i,n,fact=1;
	printf("enter any number:");
	scanf("%ld",&n);
	for(i=1;1<=n;i++)
	{
		fact*=i;
	}
	printf("factorial of the given number:%ld",fact);
	return 0;
}
