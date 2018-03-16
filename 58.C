#include <stdio.h>

int main(void) 
{
	
	
int a,b,q;
printf("\nEnter 1st values:");
scanf("%d",&a);
printf("\nEnter 2nd values:");
scanf("%d",&b);
printf("\nValue bfr swap%d %d",a,b);
q=a+b;
a=q-a;
b=q-b;
printf("\nAftr swap%d %d",a,b);
	return 0;
}
