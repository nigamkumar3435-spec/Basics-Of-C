// swap with third variable

int main()
{
	int a,b,c;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Before swap:%d %d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nAfter swap:%d %d",a,b);
}
