#include<stdio.h>
int sum();
int main()
{
	int x;
	x=sum ();
	printf("Sum=%d",x);
	return 0;
}
int sum()
{
	int a=10,b=1;
	return (a+b);
}
