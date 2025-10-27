//SWAPING OF TWO NUMBERS
# include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swaping, the numbers are %d and %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After swaping, the numbers are %d and %d",a,b);
	return 0;
}
