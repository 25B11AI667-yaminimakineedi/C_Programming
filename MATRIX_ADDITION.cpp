#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r,c,i,j;
	printf("Enter row and column sizes of A  and B matrixes:");
	scanf("%d%d",&r,&c);
	printf("Enter values of A matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter values of B matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]= A[i][j]+B[i][j];
		}
	}
	printf("\n Result matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",C[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
