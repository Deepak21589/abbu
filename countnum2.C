#include<stdio.h>

int main()
{
int a,d=0;
printf("Enter the number");
scanf("%d",&a);
 while(a!=0)
 {
 	a=a/10;
 	d++;
 
 }
printf("%d",d);

return 0;	
}
