#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter string name:");
    gets(s);
    strlwr(s);
	printf("string in lowercase: %s",s);
	return 0;
	
}
