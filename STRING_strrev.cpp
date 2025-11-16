#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter your name :");
	gets(s);
    strrev(s);
    printf("Reverse string:%s",s);
	return 0;
}
