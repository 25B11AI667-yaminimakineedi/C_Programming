#include<stdio.h>
int sum(int ,int);
int main()
{
	int a=45 ,b=54;
	sum(a,b);
	return 0;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
    printf("Sum =%d",c);
}
