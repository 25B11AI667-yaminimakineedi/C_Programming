//SIMPLE INTEREST
#include <stdio.h>
int main ()
{
	float P,T,R,Si;
	printf("enter P,T,R, values: ");
	scanf("%f%f%f",&P,&T,&R);
	Si=(P*T*R)/100;
	printf("SIMPLE INTEREST = %f",Si);
	return 0;
}

