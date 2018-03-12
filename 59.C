#include <stdio.h>

int main() 
{
int a,b,g;
printf("\nEnter 1st values:");
scanf("%d",&a);
printf("\nEnter 2nd values:");
scanf("%d",&b);
printf("\nValue bfr swap%d %d",a,b);
g=a+b;
a=g-a;
b=g-b;
printf("\nAftr swap%d %d",a,b);
	return 0;
}
