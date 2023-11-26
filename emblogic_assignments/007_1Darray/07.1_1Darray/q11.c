#include<stdio.h>
int main()
{
	int i,j;
	int ele;
	int size=0;

	int arr[5];

	printf("enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf(" %d",&arr[i]);
	}
	
	printf("\n");
	printf("the array:");
	for(i=0;i<10;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	size=((sizeof(arr))/(sizeof(arr[0])));
	printf("size of array:%d",size);
	printf("\n");

	/*******************************************************/
	
	for(i=0; i<(5/2);i++)
	{
		ele=arr[i];
		arr[i]=arr[5-i-1];
		arr[5-i-1]=ele;
	}
		
	/*******************************************************/
	
	printf("\n");
	printf("the sorted array:");
	for(i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	

return 0;
}
