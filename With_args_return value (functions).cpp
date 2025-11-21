#include<stdio.h>
int sum(int ,int);
int main()
{
	int a=45 ,b=54 ,c;
    c=sum(a,b);
    printf("Sum=%d",c);
	return 0;
}
int sum(int a,int b)
{
	return (a+b);
}
