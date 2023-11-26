

/*
 *
Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves



MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)

merge( ):

this will take arguments :
	lo //lowest position=0,
	mid//middle position,
	hi//highest position=size,
        arr// the original unsorted array;

now make two temp array of sizr
1) lo to mid
2) mid to hi

now copy the array from lo to mid in 1 tmp array
and
copy the array from from mid to hi in 2 tmp array

now you have to put elements into arr original array 
so compare the two tmp array and put smallest element first in arr original array
and now if any of the elements left in any of the two tmp array are copied into arr original array.

*
*/













