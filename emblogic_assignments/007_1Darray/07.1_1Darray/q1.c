#include<stdio.h>
int main()
{
	int i;
	int arr[5];
	printf("enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf(" %d",&arr[i]);
	}
	
	printf("\n");
	printf("the array:");
	for(i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\nthe END\n");
return 0;
}
