
#include<stdio.h>

#define MAX 50

int main()
{
	//deleting	

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
	
	//sorting
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
	
	printf("enter the element to delete in array:");
	scanf(" %d",&ele);

	for(i=0; i<size; i++ )
	{
		if(arr[i]==ele)
		{
			pos=i;
		}
	}
	printf("\n------------------------------------------\n");
	printf("NOTE: the array indexing start from 0\n");
	printf("the position of the element to be deleted is:%d (after:%d)\n",pos,pos-1);

	for(i=pos; i<size; i++)
	{
		arr[i]=arr[i+1];		
	}

	size--;
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
