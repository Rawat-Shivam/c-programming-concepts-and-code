
/*
 *
Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

*
*
*/

#include<stdio.h>

void selection_sort(int*,int);

int main()
{


	int arr[10]={54,78,96,35,12,45,89,55,20,4};

	printf("array:");
	for(int i=0; i<10; i++)
		printf(" %d,",arr[i]);

	printf("\n");

	selection_sort(arr,9);

return 0;
}

void selection_sort(int* arr,int size)
{
	int tmp;

	for(int i=0; i<=size; i++)
	{
		for(int j=i+1; j<=size; j++)
		{
			if(*(arr+i) > *(arr+j))
			{
				tmp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=tmp;
			}

		}
	}
	
	printf("sorted array:");
	for(int i=0; i<10; i++)
		printf(" %d,",arr[i]);

	printf("\n");
	
}
