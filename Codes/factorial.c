#include<stdio.h>
int main()
{
	int a,mux=1;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	while(a)
	{
		mux=mux*a;
		a--;
	}
	printf("%d ",mux);
}
