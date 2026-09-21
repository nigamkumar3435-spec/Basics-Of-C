#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		n=a%10;
		a=a/10;
    	printf("%d\n",n);	
	}
	printf("%d",sum);
}
