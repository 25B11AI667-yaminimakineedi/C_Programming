// PRIME OR NOT
# include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		c++;
    }
    }
    if(c==2)
    {
    	printf("It is prime");
	}
	else
	{
		printf("It is not a prime");
	}
	return 0;
}
