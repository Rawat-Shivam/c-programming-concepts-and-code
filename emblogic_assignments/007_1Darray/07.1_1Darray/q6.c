#include<stdio.h>

int main()
{
	
	int arr[6];
	
	int sum=0,product=1;
	
	int s=0,l=0;
	int pos=0;

	int ele,j,k;

// go to the last to see :: seprate odd and even inside the same array	
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
	
	s=arr[0];	
	for(int i=0; i<6; i++)
	{
		if(arr[i]<s)
		{	
			s=arr[i];	
			pos=i;
		}
	}
	printf("the smallest array element:%d at position:%d",s,pos);
	printf("\n");
	
	
	
	for(int i=0; i<6; i++)
	{
		if(arr[i]>s)
		{	
			s=arr[i];	
			pos=i;
		}
	}
	printf("the largest array element:%d at position:%d",s,pos);
	printf("\n");
	



	printf("\n");
	for(int i=0; i<6; i++)
	{
		if(arr[i]&1)
		{
			printf("O D D\n");
			//arr[i]=69;
		}
		else
		{
			printf("E V E N\n");
			//arr[i]=0;
		}
	}

	
	
		
			//////////////////////////////////////////////////////////////////////////////////////////////////

	
	printf("\n");

	j=0,k=0,ele=0;
	
	while(j<6)
	{
		if(arr[j]%2!=0)
		{
			printf("this is odd\n");
		}
		else
		{
			printf("this is even\n");
			k=j;
			ele=arr[k];
			while(k<6)
			{
				if(arr[k]%2!=0)
				{
					printf("ok got the second odd\n");
					//now swap 
					arr[j]=arr[k];
					arr[k]=ele;
				}
				k++;
			}
		}
		j++;
	}
	
	
	printf("the array :\n");
	for(int i=0;i<6;i++)
	{
		printf(" %d",arr[i]);
	}
	
	
	printf("\n");
	
	
	
		
return 0;
}

