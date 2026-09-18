#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	a=a>b?a:b;
	printf("%d is greater",a);
		
}
/*
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	a>b?(printf("%d is maximum",a)):(printf("%d is maximum",b));
		
}
