


#include<stdio.h>

int main()
{

	int *arr[10],i;
	char *p,*ptr;
	printf("enter the 3 elemens:\n");
	for(i=0; i<3 ; i++)
	{
		scanf(" %d",arr+i);
		//printf("%d--->%p",&arr+i,&arr+i);
	}
	printf("\n");
	ptr=(char*)arr;
	printf("%p--->%d",&arr+0,arr[0]);
	printf("\n");
	printf("addresses :: %p \t %p \t %p \n",ptr,ptr+1,ptr+2,ptr+3);
	printf("\n");
	printf("bytes are: %d --- %d---%d \n",*(ptr),*(ptr+1),*(ptr+2),*(ptr+3));

	
}
