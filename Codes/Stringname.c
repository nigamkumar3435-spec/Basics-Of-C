#include<stdio.h>
int main()
{
	int i=0;
	char name[10];
	
	printf("Enter your name: ");
	scanf("%s",name);
	
	while(i<10)
	{
		printf("%s\n",name);
		i++;	
	}
}
