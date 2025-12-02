#include<stdio.h>
int main()
{
	int a=9;
	char ch='Y';
	void *p;
	p =&a;
	printf("Value of p : %d",*(int*)p);
	p=&ch;
	printf("\n Value of p :%c",*(char*)p);
	return 0;
}
