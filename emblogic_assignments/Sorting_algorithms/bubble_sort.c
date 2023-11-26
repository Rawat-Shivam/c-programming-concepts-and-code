
/*
 *
 Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
 *
 send the biggest bubble  to the top by comparing with the adjacent nd then swap
 *
 */



#include<stdio.h>

void bubble_sort(int*,int);

int main()
{


        int arr[10]={0,1,2236,0,322,45,896,555,230,4};

        printf("array:");

        for(int i=0; i<10; i++)
                printf(" %d,",arr[i]);

        
	printf("\n");

        bubble_sort(arr,9);
        //bubbleSort(arr,9);

return 0;
}

void bubble_sort(int* arr,int size)
{
        int tmp;

        for(int i=0; i<=size; i++)
        {
                for(int j=0; j<=size-i-1; j++)
                {
                        if( (*(arr+j)) > (*(arr+j+1)) )
                        {
                                tmp=*(arr+j);
                                *(arr+j)=*(arr+j+1);
                                *(arr+j+1)=tmp;
                        }
                }
        }

        printf("sorted array:");
       
       	for(int i=0; i<10; i++)
                printf(" %d,",arr[i]);

        printf("\n");

}

/**********************
 *
 * suppose only first two elements are inorder so in only two iteration it will sort array.
 * and if size was of 1000 elements ...
 * therefore in first two iterations it will sort array and remain iterations 998 will go waist
 *
 */

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

////////////////////////////////////////////////////////////////

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
