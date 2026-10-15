#include<stdio.h>
int main()
{
	int i,min,a[10];
	
	printf("Enter 10 values: \n");
	
	for(i=0;i<10;i++)
	{
		printf("Enter value at %d position: ",i+1);
		scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<10;i++)
    {
		if(min>a[i])
		{
			min=a[i];
		}	
	}
	printf("Minimum=%d",min);
}
