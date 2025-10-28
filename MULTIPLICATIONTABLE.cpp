//MULTIPLICATION TABLE
#include <stdio.h>
int main()
{
	int i,tn,ts;
	printf("Enter table number :");
	scanf("%d",&tn);
	printf("Enter table size:");
	scanf("%d",&ts);
	for(i=1;i<=ts;i++)
	{
	 printf("%d*%d=%d\n",tn,i,tn*i);
	}
	return 0;
}
