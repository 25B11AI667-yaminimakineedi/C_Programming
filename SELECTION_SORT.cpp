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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
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
