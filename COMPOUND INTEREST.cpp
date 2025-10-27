//COMPOUND INTEREST
#include <stdio.h>
#include<math.h>
int main ()
{
	float P,T,R,Ci;
	printf("enter P,T,R, values: ");
	scanf("%f%f%f",&P,&T,&R);
    Ci=P*(pow(1+R/100,T)-1);
	printf("COMPOUND INTEREST = %f",Ci);
	return 0;
}

