//RESULT OF A STUDENT
#include <stdio.h>
int main()
{
	int s1,s2,s3 ,T,P;
	printf("enter subjectwise marks:");
	scanf("%d%d%d",&s1,&s2,&s3);
	T=s1+s2+s3;
	P=T/3;
	if(s1>=40&&s2>=40&&s3>=40)
	{
	    if(P>=90)
		{
		printf("A GRADE");
	    }
		else if(P>=70)
		{
		printf("B GRADE");
	    }
    	else if(P>=50)
		{
		printf("C GRADE");
    	}
		else if(P>=40)
		{
		printf("D GRADE");
	    }
	}
	else
	{
		printf("Failed");
	}
	
	return 0;
}
