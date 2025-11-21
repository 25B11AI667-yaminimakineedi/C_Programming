#include<stdio.h>
void sum(int,int);
void product(int,int);
int main()
{
	int x=8,y=9;
	sum(x,y);
    product(x,y);
	return 0;
}
void sum(int x, int y)
{
	int z;
	z=x+y;
	printf("Sum =%d",z);
}
void product(int x,int y)
{
	int z;
	z=x*y;
	printf("\n Product=%d",z);
}
