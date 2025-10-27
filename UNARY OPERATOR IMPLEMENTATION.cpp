//IMPLEMENTATION OF UNARY OPERATOR
#include<stdio.h>
int main()
{
	int p, q,r,s,x;
	printf("Enter any number:");
	scanf("%d",&x);
	p=x++;
	q=--x;
	r=++x;
	s=x--;
	printf("p=%d q=%d r=%d s=%d x=%d",p,q,r,s,x);
	return 0;
}
