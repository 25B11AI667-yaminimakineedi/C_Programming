#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter string name:");
    gets(s1);
    strcpy(s2,s1);
	printf("The original string: %s",s1);
	printf("\nThe copied string:%s",s2); 
	return 0;
	
}
