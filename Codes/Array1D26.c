#include<stdio.h>
int main()
{
	int i,a[10];
	
	printf("Enter 10 values: \n");
	for(i=0;i<10;i++)
	{
		printf("Enter value at %d position: ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("Even Numbers are:\n");
	for(i=0;i<10;i++)
	{
    	if(a[i]%2==0)
		{
	    	printf("%d ",a[i]);
    	}
    }
}
