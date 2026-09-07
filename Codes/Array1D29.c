#include<stdio.h>
int main()
{
	int i,max,a[10];
	
	printf("Enter 10 values: \n");
	
	for(i=0;i<10;i++)
	{
		printf("Enter value at %d position: ",i+1);
		scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
		if(max<a[i])
		{
			max=a[i];
		}	
	}
	printf("Maximum= %d",max);
}
