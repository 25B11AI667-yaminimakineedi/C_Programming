#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l;
	printf("Enter string name:");
    gets(s);
    l=strlen(s);
	printf("Length of string: %d",l);
	return 0;
	
}
