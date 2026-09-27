#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter first value:");
	scanf("%d",&a);
	printf("enter second value:");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	
	c=a;
	a=b;
	b=c;	
	printf("after swapping a=%d and b=%d",a,b);
}
