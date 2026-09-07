#include<stdio.h>
int main()
{
	int n,i,a[]={12,23,34,45,56,67,78,89,90},f=0;

	printf("Enter a number:");
	scanf("%d",&n);
    for(i=0;i<10;i++)
    {
		if(a[i]==n)
		{
			f=1;
			break;
		}	
	}
	if(f==1)
	{
		printf("Element found at %d index",i);
	}
	else
	{
		printf("Element not found ");
	}
}
