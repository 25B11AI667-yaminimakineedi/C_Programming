#include<stdio.h>
int main()
{
	int A[10][10],r,c,i,j;
	printf("Enter row and column sizes:");
	scanf("%d%d",&r,&c);
	printf("Enter array values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
    printf("Transpose matrix");
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",A[j][i]);
		}
		printf("\n");
	}
	return 0;
}
