#include<stdio.h>
int main()
{
	int a=12,*p,**q;
	p=&a;
	q=&p;
	printf("Value of a,p,q:%d,%d,%d",a,*p,**q);
	return 0;
}
