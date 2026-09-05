#include<stdio.h>
int main()
{
	int i=1;
	for(;i<10;)
	{
		printf("%d/%d + ",i,(i*i));
		i++;
	}
	printf("%d/%d ",i,(i*i));
}
