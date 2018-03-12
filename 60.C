#include <stdio.h>

int main(void)
{
int n,i,c=0,s=1,a;
printf("\nEnter the num:");
scanf("%d",&n);
printf("\nFibonacci series");
for(i=0;i<=n;i++)
{
a=c+s;
printf("\n%d",a);
c=s;
s=a;
}

	return 0;
}
