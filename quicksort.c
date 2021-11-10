#include <stdio.h>
#include <stdlib.h>
#define N 5
void quicksort(int arr[], int low, int high)
{
	int middle;
	if(low>=high) return;
	middle =split(arr,low,high);
	quicksort(arr, low, middle-1);
	quicksort(arr, middle+1, high);
}
int split(int a[], int low, int high)
{
	int part_element=a[high];
	while(low<high)
	{
		while(low<high && a[low] <= part_element )
		low++;
		if(low>=high) break;
		a[high--]=a[low];
		while(low<high && part_element <= a[high])
		high--;
		if(low>=high) break;
		a[low++]=a[high];
	}
	a[high] = part_element;
	return high;
}


int main()
{
int a[N],i;
printf("enter 5 integer:");
for(i=0;i<N;i++) scanf("%d",&a[i]);
quicksort(a,0,N-1);
printf("In sorted order: ");
for(i=0;i<N;i++)
	printf("%d ", a[i]);
return 0;
}

