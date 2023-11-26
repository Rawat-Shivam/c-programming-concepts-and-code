#include<stdio.h>

//const int arr[5]={9,8,7,6,5};//ERROR

//int arr[5]={9,8,7,6,5};//NO ERROR

int main()
{
	const int arr[5]={9,8,7,6,5};
	int *p;
	p=arr+3;

	*p=1000;
	printf("%d\n",arr[3]);

return 0;
}
