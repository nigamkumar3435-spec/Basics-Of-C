#include<stdio.h>
int main()

{
	int h,e,m,s,t;
	float a;
	
	printf("marks of hindi:");
	scanf("%d",&h);
	printf("marks of english:");
	scanf("%d",&e);
	printf("marks of maths:");
	scanf("%d",&m);
	printf("marks of science:");
	scanf("%d",&s);
	
	t=h+e+m+s;
	a=t/4.0;
	printf("total marks=%d\n",t);
	printf("average=%f",a);
	
}
