#include <stdio.h>
#include <stdlib.h>
#define N 10
void find_value(int a[], int n, int *max, int *secmax)
{
	int i,temp;
	*max=*secmax=a[0];
	for(i=1;i<N-1;i++)
	{
		if(a[i]>*max)
		{
			*max=a[i];
		}
		if(a[i+1]>*secmax)
		{
		*secmax=a[i+1];
		}

		if(*secmax>*max)
		{
			temp=*max;
			*max=*secmax;
			*secmax=temp;
		}	
	}
 } 
int main()
{
int a[N]={0},i,big,secbig;
for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	find_value(a,N,&big,&secbig);
	printf("Largest: %d\n",big);
	printf("SecLargest: %d\n",secbig);
return 0;
}

