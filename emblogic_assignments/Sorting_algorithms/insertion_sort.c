/*
 *
 *
 
Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.


Algorithm
// Sort an arr[] of size n
insertionSort(arr, n)
Loop from i = 1 to n-1.
     a) Pick element arr[i] and insert it into sorted sequence arr[0…i-1]


Another Example:
12, 11, 13, 5, 6

Let us loop for i = 1 (second element of the array) to 4 (last element of the array)

i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12
11, 12, 13, 5, 6

i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13
11, 12, 13, 5, 6

i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position.
5, 11, 12, 13, 6

i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position.
5, 6, 11, 12, 13



*/
#include<stdio.h>

void insertion_sort(int[], int);

int main()
{
	int arr[10]={3,4,5,99,0,1,8,55,31,9};

	printf("array:");
	for( int i=0; i<=9; i++)
	{	
		printf("\n");
		// go and OBSERVE errors

		//printf(" %d,", *arr[i]); //compilation ERROR	
		
		printf(" %d," ,arr[i]);	
		
		printf(" %d,", *(arr+i));
		
		//no compilation error
		printf(" %d,", (arr+i));//ERROR:logical 
		
		printf(" %p,", (arr+i));
		
		
		//no compilation error
		printf(" %d,", (*arr+i)); //ERROR:logicAL
		printf("\n");
	}
	

return 0;
}

/*********
 *
 *
 *

		Insertion Sort works as follows:

The first step involves the comparison of the element in question with its adjacent element.

And if at every comparison reveals that the element in question can be inserted at a particular position, then space is created for it by shifting the other elements one position to the right and inserting the element at the suitable position.

The above procedure is repeated until all the element in the array is at their apt position.

*
*
*/

void insertion_sort(int arr[], int size)
{
	
	printf("\n");
	printf("sorted array:\n");
	
	for(int i=0; i<=size; i++)
	{
		int tmp=arr[i];
		int j=i;

// it will not work for i=0 first iteration.... so dry run for i=1;
		while(j>0 && tmp<arr[j-1])
		{
			arr[j]=arr[j-1];
			j=j-1;
		
		}
		
		arr[j]=tmp;
	
	}

	for(int i=0; i<=9; i++)
		printf(" %d,",arr[i]);

	printf("\n");

}

/******************** recursive  ********************************/
/*
 *

		 How to implement it recursively?

Recursive Insertion Sort has no performance/implementation advantages, but can be a good question to check one’s understanding of Insertion Sort and recursion.

If we take a closer look at Insertion Sort algorithm, we keep processed elements sorted and insert new elements one by one in the inserted array.


*/

/*
 *
 
void insertionSortRecursive(int arr[], int n)
{
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
   
    //	 check this recursion technique 
    insertionSortRecursive( arr, n-1 );

// what it does is . we have the last position recived as size
// but sorting starts from first pos and then sort and thene geoes to next position
// so here we have first called the recursive function to reach at first position 
// and then implement our logic
// and when recursion will go back it will be just like
// a loop starting from first position
  





	// Insert last element at its correct position
    // in sorted array.
    int last = arr[n-1];
    int j = n-2;

   //  Move elements of arr[0..i-1], that are
     // greater than key, to one position ahead
     // of their current position 
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

*/










