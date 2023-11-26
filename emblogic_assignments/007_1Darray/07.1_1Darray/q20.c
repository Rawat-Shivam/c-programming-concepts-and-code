
#include<stdio.h>

#define MAX 50

int main()
{
// reverse	

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
	
	
	
	
	for( i=0; i<(size/2); i++)
	{
		tmp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=tmp;
	}
	printf("\n");
	
	fflush(stdout);	
	
	printf("the REVERSED array elements:\n");
	for( i=0; i<size; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");

return 0;	
}
