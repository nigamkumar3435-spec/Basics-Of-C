#include<stdio.h>
int main()
{
	int i,a[10],sum=0;
	
	printf("Enter 10 values: \n");
	for(i=0;i<10;i++)
	{
		printf("Enter value at %d position: ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The sum of array are: %d",sum);
//	for(i=0;i<10;i++)
//	{
//    	int sum=0;
//    	
//	   	printf("%d ",sum);
//    	
//    }
}
