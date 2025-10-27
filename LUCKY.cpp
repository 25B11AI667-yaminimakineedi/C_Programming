//LUCKY NUMBER FROM DOB
# include<stdio.h>
int main()
{
	int D,M,Y,sum,lucky;
	printf("Enter your Date of Birth(DD/MM/YYYY):");
	scanf("%d%d%d",&D,&M,&Y);
	sum=D+M+Y;
	lucky=sum%9;
	printf("\nYour Lucky number is %d",lucky);
	return 0;
}
