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
		sum=sum*10+n;
		a=a/10;
	}
	if(sum==temp)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}
