#include<stdio.h>
#include<math.h>

int main()
{
int m,p;
printf("Enter the number");
scanf("%d",&m);
p=m/2;
if(pow(2,p)==0)
{
 printf("\nYES");
}
else
{
	printf("\nNO");
}
return 0;	
}
