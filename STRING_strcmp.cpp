#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter two strings :");
    scanf("%s%s",s1,s2);
    i=strcmp(s1,s2);
    if(i==0)
    printf("Both strings are equal");
    else
    printf("Strings are not equal");
    return 0;
} 
