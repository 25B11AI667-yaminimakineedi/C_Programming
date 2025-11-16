#include<stdio.h>
int main()
{
	int a[100],n,i,j,x;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	for(i=n-1;i>=n;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
     	}
	}
	printf("\n After sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
