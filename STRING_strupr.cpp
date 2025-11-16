#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter string:");
    gets(s);
    strupr(s);
	printf("string in uppercase : %s",s);
	return 0;
	
}
