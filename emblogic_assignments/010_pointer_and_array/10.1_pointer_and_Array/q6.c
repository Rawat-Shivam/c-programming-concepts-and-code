#include<stdio.h>

int fun(int[]);

int main()
{
	int arr[4]={99,55,44,11};

	printf("%p\n",arr);
	fun(arr);
	printf("%d\n",arr[0]);
	
return 0;
}

int fun(int p[4])
{
	int i=10;

	printf("%p\n",p);

	printf("%d\n",p[0]);
	printf("%d\n",p[1]);

	p=&i;

	printf("%p\n",p);
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
return 0;
}

