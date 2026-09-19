#include <stdio.h>
#include <stdlib.h>

//extern int count;
int main()
{
	int value;
	value=increment();
	value=increment();
	value=increment();
//	count=count+3;
//	value=count;

	printf("%d",value);
	return 0;
}
//  Note:- A static integer variable always assigned with a constant literal(or value) not variable.
