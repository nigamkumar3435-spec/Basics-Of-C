#include<stdio.h>
int main()
{
	int e,h,m,s,t;
	float a;
	
	printf("Enter the marks of English:");
	scanf("%d",&e);
	
	printf("Enter the marks of Hindi:");
	scanf("%d",&h);
	
	printf("Enter the marks of Math:");
	scanf("%d",&m);
	
	printf("Enter the marks of Science:");
	scanf("%d",&s);
	
	t=e+h+m+s;
	a=t/4.0;
	
	printf("Total marks are:%d",t);
	printf("\nAverage marks is:%f",a);	
}
