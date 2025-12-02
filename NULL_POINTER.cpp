#include<stdio.h>
int main()
{
	int a=9;
	int *p= NULL;
	if (p==0)
	p=&a;
	printf("Value of p =%d ",*p);
	return 0;
}
