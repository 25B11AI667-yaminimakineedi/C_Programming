//PALINDROME OR NOT
# include<stdio.h>
int main()
{
	int i, n,d,temp,rev=0;
	printf("Enter any number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(temp==rev)
	{
	printf("It is a palindrome");
    }
    else
    {
	printf("It is not a palindrome");
    }
	return 0;
}
