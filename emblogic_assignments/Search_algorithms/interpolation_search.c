


// The idea of formula is to return higher value of pos
// when element to be searched is closer to arr[hi]. And
// smaller value when closer to arr[lo]

//pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ] 

//arr[] ==> Array where elements need to be searched
//x     ==> Element to be searched
//lo    ==> Starting index in arr[]
//hi    ==> Ending index in arr[]


/*
 *
 * Interpolation Search
 
Given a sorted array of n uniformly distributed values arr[], write a function to search for a particular element x in the array.

Linear Search finds the element in O(n) time, Jump Search takes O(√ n) time and Binary Search take O(Log n) time.
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed. Binary Search always goes to the middle element to check. On the other hand, interpolation search may go to different locations according to the value of the key being searched. For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side.

*
*
*/


#include<stdio.h>

int interpolation_search(int [], int, int);

int main()
{
 
	int ret,tmp;
	int arr[10]={54,67,23,86,87,10,83,28,61,17};
int ele;

	printf("\n");

	//sorting
	for( int i=0; i<10; i++)
	{
		for( int j=i+1; j<10; j++)
		{
			if(arr[i]>arr[j])
			{
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}


	for( int i=0; i<10; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	printf("enter the element to find:");
	scanf(" %d",&ele);
	printf("\n");

/*******************************************************************/
	
	ret=interpolation_search(arr,9,ele);

	(ret==-1)?(printf("ERROR::: not found\n")):(printf("FOUND::: at poistion :%d",ret));

return 0;

}

int interpolation_search(int arr[], int size, int ele)
{  
	int lo=0,hi=size;

	while(lo<=hi &&  ele>=arr[lo] &&  ele<=arr[hi])
	{
		
		if(lo == hi)
		{
			if(arr[lo]==ele)
			{	
				return lo;
			}
			return -1;
		}

		int pos= lo + ((ele - arr[lo]) * (hi-lo ) / (arr[hi]-arr[lo]));
	
		printf("position:%d\n",pos);	
		if(arr[pos]==ele)
			return pos;
		
		if( arr[pos]<ele)
			lo=pos+1;

		if( arr[pos]>ele)
			hi=pos-1;
	
	
	}
	
return -1;	
}










