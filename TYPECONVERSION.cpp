//IMPLEMENTATION OF TYPE CONVERSION
# include <stdio.h>
int main()
{
	int a=5,b=2;
	float c,d;
	c=a/b;
	printf("Implict value=%f",c);
	d=(float)a/b;
	printf("\n Explict value = %f",d);
	return 0;
}
