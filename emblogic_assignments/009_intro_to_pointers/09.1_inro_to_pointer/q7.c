#include<stdio.h>
#include<stdlib.h> //malloc,exit
int main()
{

	int e;
	int size=0;
	char ch;

int arr1[5];
int arr2[5];

	int *arr=NULL;
	arr=(int *)malloc(sizeof(int));
	if(arr==NULL)
	{
		perror("malloc():failed");
		exit(EXIT_FAILURE);
	}
///////////////		for arr1	///////////////////////////////
	
	for(int i=0; i<5; i++)
	{
		scanf(" %d,",(arr1+i));		
	}
	printf("\n");

	
	printf("array:");
	for(int i=0; i<5; i++)
	{
		printf(" %d,",*(arr1+i));		
	}
	printf("\n");


//////////////		for arr2	///////////////////////////


	for(int i=0; i<5; i++)
	{
		scanf(" %d,",(arr2+i));		
	}
	printf("\n");
	
	//warning: initialization makes integer from pointer without a cast
	//error: invalid type argument of unary ‘*’ (have ‘int’)
	//   printf(" %d,",*(ptr2+i));
	//             ^~~~~~~~~
	//int ptr2=arr2;

	int *ptr2=arr2;
	printf("---%d---%d----%d----%d---%d\n ",*ptr2,*arr2+0,arr2[0],ptr2,arr2);

	//*ptr2=arr;
	printf("array:");
	for(int i=0; i<5; i++)
	{
		
		printf(" %d,",*(ptr2+i));//address

		//printf(" %d,",ptr2+i);//address
	}
	printf("\n");


	




//////////////		for arr		///////////////////////////

#ifdef hi

	printf("enter the array elements:\n");
	//getchar alway takes the input and convert it to ascii value
	//while((e=getchar())!='\n')
	//while((e=(char)getchar())!='\n')
	//while((e=(int)getchar())!='\n')
	while(1)
	{
		scanf(" %d",&e);
		if(e=='\n')
			break;
		size++;
		arr=(int*)realloc(arr,sizeof(int)*size);
		*(arr+size-1)=e;		
	}
	//this is not going to work
#endif
	printf("\n");

	printf("enter the array elements:\n");
	while(1)
	{
		printf("\n");
		printf("want to enter the element(y/N):");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			scanf(" %d",&e);
			size++;
			arr=(int*)realloc(arr,sizeof(int)*size);
			*(arr+size-1)=e;		
		}
		else
		{
			printf("ok bye\n");
			break;
		}	
	}
	printf("size of array:%d",size);
	
	printf("array:");
	for(int i=0; i<size; i++)
	{
		printf(" %d,",*(arr+i));		
	}
	printf("\n");



return 0;
}
