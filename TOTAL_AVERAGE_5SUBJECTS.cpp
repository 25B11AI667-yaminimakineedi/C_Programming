//TOTAL AND AVERAGE OF 5 SUBJECTS
#include <stdio.h>
int main()
{
	int S1,S2,S3,S4,S5,T;
	float Avg;
	printf("Enter marks in 5 subjects:");
	scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
	T=S1+S2+S3+S4+S5;
	Avg=T/5;
	printf("TOTAL =%d",T);
	printf("\n AVERAGE =%f",Avg);
	return 0;
}
