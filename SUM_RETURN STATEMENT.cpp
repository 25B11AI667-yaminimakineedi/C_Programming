#include<stdio.h>
int sum(int ,int);
int main()
{
	int a, b,c;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("Sum=%d",c);
	return 0;
}
int sum(int a,int b)
{
	return (a+b);
}
