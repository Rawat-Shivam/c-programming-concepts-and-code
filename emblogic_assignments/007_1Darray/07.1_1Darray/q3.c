#include<stdio.h>

int main()
{
	
	int arr[6];
	int sum=0,product=1;

	printf("enter the 6 array elements:\n");
	for(int i=0;i<6;i++)
	{
		scanf(" %d",&arr[i]);
	}
	

	printf("\n");
	printf("the array :\n");
	for(int i=0;i<6;i++)
	{
		printf(" %d",arr[i]);
	}
	
	printf("\n");
	for(int i=0; i<6; i++)
	{
		sum=sum+arr[i];
	}
	printf("the sum of array elements:%d",sum);

		
	printf("\n");
	for(int i=0; i<6; i++)
	{
		product=product*arr[i];
	}
	printf("the product of array elements:%d",product);
	
	printf("\n");
	
		
return 0;
}

