// swap without third variable

int main()
{
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Before swap:%d %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swap:%d %d",a,b);
}
