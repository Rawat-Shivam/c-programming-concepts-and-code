
#include<stdio.h>

#define MAX 50

int main()
{
	//adding element to unsorted array is easy to go to last and add
	//but addding in sorted array is the task to do
	//therefore ,u can find the position and put it 
	//	     or out it in end and then again sort it.
	

	int i=0,j=0;
	int ele,tmp,pos;
	int size=0;
	int arr[MAX];

	printf("\n");
	printf("enter the array size:");
	scanf(" %d",&size);

	printf("\n");
	printf("enter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf(" %d",&arr[i]);
	}
	
	printf("\n");
	printf("the array elements:\n");
	for( i=0; i<size; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	for(i=0; i<size; i++)
	{
		for( j=i+1; j<size; j++ )
		{
			if(arr[i]>arr[j])
			{
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}	
		
		}
	}

	
	printf("\n");
	printf("the  sorted array elements:\n");
	for( i=0; i<size; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	printf("enter the element to add in array:");
	scanf(" %d",&ele);

	for(i=0; i<size; i++ )
	{
		if( ele<arr[0] )
		{
			pos=0;	
		}
		if( ele>arr[size-1] )
		{
			pos=size-1;
		}
		if((ele>arr[i]) && (ele<arr[i+1]) )
		{
			pos=i+1;
		}
	}
	printf("\n------------------------------------------\n");
	printf("NOTE: the array indexing start from 0\n");
	printf("the position of the element to be inserted at:%d (after:%d)\n",pos,pos-1);

	for(i=size; i>=pos; i--)
	{
		arr[i+1]=arr[i];		
	}
	arr[pos]=ele;

	size++;
	printf("\n");

	printf("the array size:%d",size);
	printf("\n");
	printf("the NEW array elements:\n");
	for( i=0; i<size; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	
return 0;	
}
