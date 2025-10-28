//TEMPERATURE COVERSION- FAHRENHEIT TO CELSIUS
# include<stdio.h>
int main()
{
	int C,F;
	printf("Enter temperature in fahrenheit: ");
	scanf("%d",&F);
	C=(F-32)/1.8;
	printf("Temperature in celsius:%d",C);
	return 0;
}
