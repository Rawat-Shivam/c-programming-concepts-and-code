#include<stdio.h>

//The time complexity of above algorithm is O(n).

int main()
{
	int ele;
	int arr[10]={3,4,5,6,7,8,9,0,1,2};
	
	for(int  i=0; i<10; i++)
	{
		printf(" %d",arr[i]);
	}

	printf("\n");
	printf("enter the element to search:");
	scanf(" %d",&ele);

	printf("\n");
	for(int  i=0; i<10; i++)
	{
		if(arr[i]==ele)
		{
			printf("element found at:%d",i);	
		}
	}

	printf("\n");

return 0;
}

