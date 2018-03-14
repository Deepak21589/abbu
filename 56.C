#include <stdio.h>
#include<string.h>

int main(void) 
{
char r[1000];
int i;
 printf("enter the string:");
 scanf("%s",&r[i]);
 for(i=0;i<=strlen(r);i++)
{
if(((r[i]>=0)&&(r[i]<=9))||((r[i]>='a')&&(r[i]<='z'))||((r[i]>='A')&&(r[i]<='Z')))
{
printf("\nYES");
}
else
{
	printf("NO");
}
}
	return 0;
}
