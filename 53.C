#include <stdio.h>

int main(void)
{
int a,k,l;
printf("\nEnter the num:");
scanf("%d",&a);
while(a!=0)
{
l=a%10;

k=k+l;
a=a/10;
}
printf("\nTHE sum is%d",k);
	return 0;
}
