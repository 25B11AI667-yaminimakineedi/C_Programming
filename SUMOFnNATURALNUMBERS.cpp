//SUM OF n NATURAL NUMBERS
# include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  sum+=i;	
	}
	printf("Sum of n natural numbers:%d",sum);
	return 0;
}
