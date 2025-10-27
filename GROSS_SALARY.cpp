//GROSS SALARY
#include<stdio.h>
int main()
{
	int bs,da, hra,gs;
	printf("Enter basic salary of employee:");
	scanf("%d",&bs);
	if(bs>=10000)
	{
		da=0.10*bs;
		hra=0.15*bs;
	}
	else
	{
		da=0.15*bs;
		hra=0.20*bs;
	}
	gs=bs+da+hra;
	printf("DA:%d",da);
	printf("\n HRA:%d",hra);
	printf("\n Gross salary of employee:%d",gs);
	return 0;
}
