#include <stdio.h>
#include <stdlib.h>
void bubble_sort2222(int arr[],int n)
{
	int i,tem;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
		tem=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=tem;
		}
	}
	if(n>=0) bubble_sort2222(arr, n-1);

	} 
int main()
{
int i,arr[5]={5,2,1,4,3};
bubble_sort2222(arr,5);
for(i=0;i<5;i++) printf("%-10d",arr[i]);
return 0;
}

