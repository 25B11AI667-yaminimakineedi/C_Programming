//TEMPERATURE COVERSION-CELSIUS TO FAHRENHEIT
# include<stdio.h>
int main()
{
	int C,F;
	printf("Enter temperature in celsius: ");
	scanf("%d",&C);
	F=(C*1.8)+32;
	printf("Temperature in fahrenheit:%d",F);
	return 0;
}
