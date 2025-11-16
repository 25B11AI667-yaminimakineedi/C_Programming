#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r1,c1,r2,c2,i,j,k;
	printf("Enter row & column size of A matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter row & column sizes of B matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
	printf("Matrix multiplication is not possible");
	exit (1);
    }
    printf("Enter values of matrix of A:");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf(" %d",&A[i][j]);
		}
		printf("\n");
	}
	printf("Enter values of B matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		  scanf("%d",&B[i][j]);	
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			C[i][j]=0;
		for(k=0;k<c2;k++)
		{
			C[i][j]=C[i][j]+A[i][k]*B[k][j];
		}
		}
	}
	printf("\n Result matrix is");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf(" %d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
