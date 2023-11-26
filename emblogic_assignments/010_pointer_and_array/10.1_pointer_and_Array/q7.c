#include<stdio.h>
int main()
{
	int arr[4]={54,32,41,13};
	
	// to check wheather or not u can use & or * is to solve expresssion and then see.... what it is resulting in
	// if the * or & is left with a value ( &54, *54) will result in error....since these are not unary operator.
	// therefore * or & must have an expression after them
	
	//printf("%p\t%p\t%p\t%p\n",arr,(arr+0),&arr,&(arr+0));
	//printf("%p\t%p\t%p\t%p\t%p\t%p\n",arr,(arr+0),&arr,(&arr+0),&arr[0],&(*arr+0));
	//printf("%d\t%d\t%d\t%d\t%d\t%d\n",arr,*(arr+0),*arr,*(&arr+0),*arr[0],(*arr+0));
	
	
	printf("%p\t%p\t%p\t%p\n",arr,(arr+0),&arr,(&arr+0));
	printf("%p\t%p\t%p\t%p\t%p\t%p\n",arr,(arr+0),&arr,(&arr+0),arr[0],(*arr+0));
	printf("%d\t%d\t%d\t%d\t%d\t%d\n",arr,*(arr+0),*arr,*(&arr+0),arr[0],(*arr+0));
	
	int *p=arr+3;

	printf("%d\t%p\n",arr[3],&arr[3]);
	printf("%d\t%p\n",*p,p);
printf("-------------------------------------\n");
	printf("%d\t%d\n",p[-3],arr[-3]);
	printf("%d\t%d\n",p[-2],arr[-0]);
	

return 0;
}
