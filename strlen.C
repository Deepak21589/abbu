#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100],b[100],d[100],c[100];
	puts("Enter the string:");
	gets(c);
	puts("Enter the second string:");
	gets(d);
	a==strlen(c);
	b==strlen(d);
	if(a>b)
	{
		printf("\n%s",c);
	}
	else if(b>a)
	{
		printf("\n%s",d);
	}
	else
	{
		printf("\n%s,%s",c,d);
	}
	return 0;
}
