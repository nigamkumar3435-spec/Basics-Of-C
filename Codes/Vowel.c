#include<stdio.h>
int main()
{
	char x;
	printf("Enter a Character: ");
	scanf("%c",&x);
	
	if(x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'||x=='A'|| x=='E'|| x=='I'|| x=='O'|| x=='U')
	{
		printf("%c is vowel",x);
	}
	else
	{
		printf("%c is consonant",x);
	}
}
