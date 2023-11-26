#include<stdio.h>

#define MAX 50

int main()
{

	int fl,sl;
	int i=0,j=0;
	int size=0;

	int arr[MAX];

	printf("the maximum array size allowed : %d\n",MAX);
	printf("enter the array size:");
	scanf(" %d",&size);

	printf("\n");
	printf("enter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf(" %d",&arr[i]);
	}

	
	printf("::lets_find_out_the_second_largest_element::\n");
	fl=arr[0];
	sl=arr[0];
/************************* method 1 *************************************/
/*	for(i=0; i<size; i++)
	{
		if(arr[i]>=fl)
		{
			fl=arr[i];
		}
	}
	printf("\n");
	for(i=0; i<size; i++)
	{
		if( (arr[i]<fl) && (arr[i])>=sl )
		{
			sl=arr[i];
		}
	}
	printf("\n");
	printf("the largest:%d and second largest:%d\n",fl,sl);
*/
	
/**************************************************************/
/********************** method 2 ****************************************/	
	for(i=0; i<size; i++)
	{
		if(arr[i]>fl)
		{
			sl=fl;
			fl=arr[i];
		}
		if((sl<arr[i]) && (arr[i]<fl))
		{
			sl=arr[i];
		}
		
	}
		
	printf("\n");
	printf("the largest:%d and second largest:%d\n",fl,sl);
		
return 0;
}

