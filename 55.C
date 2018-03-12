#include <stdio.h>

int main(void) 
{
int a,s,d;
 printf("Enter 1st value:");
 scanf("%d",&a);
 printf("Enter 2nd value:");
 scanf("%d",&d);
 s=a*d;
 if(s%2==0)
 {
 	printf("\nEVEN");
 }
 else
 {
 	printf("\nODD");
 }
	return 0;
}
