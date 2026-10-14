/*#include <stdio.h>

int main() 
{	
    int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			for(int k=1;k<=i;k++)
		    {
		        printf("*");
	        }
		    printf(" ",j);	
		}
    }
	printf("\n");	  
}*/
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


