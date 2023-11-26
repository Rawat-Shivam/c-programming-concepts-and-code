
/*
 *
 


			 QuickSort

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

Always pick first element as pivot.
Always pick last element as pivot (implemented below)
Pick a random element as pivot.
Pick median as pivot.



*
*
*/

#include<stdio.h>
int partition();
void qsort(int [], int,int);

int main()
{
	
	
	int arr[10]={30,868,98,22,10,73,864,563,9,0};

	printf("\n");

	for(int i=0; i<=9; i++)
	{
		printf(" %d,",arr[i]);
	}
	
	printf("\n");
	
	qsort(arr,0,9);
	for(int i=0; i<=9; i++)
	{
		printf(" %d,",arr[i]);
	}
	
	printf("\n");
	
return 0;
}

int partition(int arr[], int lo, int hi)
{
	int pivot = arr[hi];
	int i=lo-1;

	int tmp;

	for(int j=0; j<=hi; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			
			//swap i,j
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;

		}
	}
	

	//swap i+1,hi
	tmp=arr[i+1];
	arr[i+1]=arr[hi];
	arr[hi]=tmp;

	return (i+1);

}


void qsort(int arr[], int lo, int hi)
{
	
	if(lo < hi)
	{
		int pi=partition(arr,lo,hi);

		qsort(arr, lo,pi-1);

		qsort(arr, pi+1, hi);
	}
}

