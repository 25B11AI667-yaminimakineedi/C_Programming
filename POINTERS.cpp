#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("Value of a = %d",a);
	printf("\nAddress of a =%u",p);
	printf("\n Value of p= %d",*p);
	printf("\n Address of p = %u",&p);
	return 0;
}
