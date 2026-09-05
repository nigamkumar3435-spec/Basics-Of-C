#include<stdio.h>
int main()
{
	int a,n,temp,sum=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	temp=a;
	
	while(a!=0)
	{
		n=a%10;
		sum=sum+n*n*n;
		a=a/10;
	}
	if(sum==temp)
	{
		printf("Number is an Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
}
