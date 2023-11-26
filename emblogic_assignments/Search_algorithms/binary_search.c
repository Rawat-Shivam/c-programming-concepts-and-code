
#include<stdio.h>

int recursive_binary_search(int[] , int, int, int);
int binary_search(int[] , int, int, int);

int main()
{
	int ele;
	int tmp,ret;
	int arr[10]={33,45,56,78,89,20,57,47,22,17};
	
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

//	ret=binary_search( arr, 0, 9 , ele); //iterative method

	ret=recursive_binary_search( arr, 0, 9 , ele); // recursive method

/*******************************************************************/
	
	(ret==-1)?(printf("ERROR::: not found\n")):(printf("FOUND::: at poistion :%d",ret));


return 0;
}




/************************** RECURSIVE method *************************/

int recursive_binary_search(int arr[], int l, int r, int ele)
{
	if(l<=r)
	{
		int m=((l+r)/2);

		if( ele==arr[m] )
			return m;
		if( ele>arr[m] )
			return recursive_binary_search(arr, m+1, r, ele);
		if(ele<arr[m])
			return recursive_binary_search(arr, l, m-1, ele);
	}
return -1;
}



/************************** ITERATIVE method *************************/
int binary_search(int arr[], int l, int r, int ele)
{
	printf("BEGIN:binary search\n");
	while(l<=r)
	{
		int m=((l+r)/2);

		if( ele==arr[m] )
		{
			return m;
		}
		
		if( ele>arr[m] )
		{
			l=m+1;
		}
		if(ele<arr[m])
		{
			r=m-1;
		}
	}

	printf("END:binary search\n");

return -1;
}


