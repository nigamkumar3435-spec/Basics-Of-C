#include<stdio.h>
int main()
{
	int profit[]={200,180,190,300,120,100};
	
	int deadline[]={5,3,3,2,4,2};
	int n=sizeof(profit)/sizeof(int);
	
	bubbleSort(profit,deadline,n);
	int job[5]={0};
	
	int i,prof=0;
	for(i=0;i<6;i++)
	{
		int x=deadline[i]-1;
		int j;
		for(j=x;j>=0;j--)
		{
			if(job[j]==0)
			{
				job[j]=i+1;
				prof += profit[i];
				break;
			}
					
		}
	}
	
	printf("\n Profit: %d",prof);
	return 0;
}

void bubbleSort(int a[],int b[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp1=a[j];
				a[j]=a[j+1];
				a[j+1]=temp1;
				
				int temp2=b[j];
				b[j]=b[j+1];
				b[j+1]=temp2;	
			}	
		}
	}
}












