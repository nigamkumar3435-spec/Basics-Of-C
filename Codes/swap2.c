#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter a number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d",a,b);
}
