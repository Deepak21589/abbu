#include <stdio.h>

int main(void) {
	
	
 int n,i,a[50],j,max;
	printf("\nEnter the no of element");
	scanf("%d",&n);
	printf("\nEnter the elements=");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
			max=a[i];
			a[i]=a[i+1];
			a[i+1]=max;
		}
	}
	printf("\nThe greatest&smallest value:%d %d",a[1],a[n]);
			
		
	return 0;
}
