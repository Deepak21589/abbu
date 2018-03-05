#include <stdio.h>

int main(void) 
{
	int a;
	printf("\nEnter the value:");
	scanf("%d",&a);
	if((a>=0)&&(a<=9))
	{
		printf("\nYES");
	}
else
{
	printf("\nNO");
}
	return 0;
}
