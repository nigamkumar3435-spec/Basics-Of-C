#include<stdio.h>
int main()
{
	int a,i,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
