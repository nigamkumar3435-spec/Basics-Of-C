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
	printf("\n You have Entered:\n");;
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
