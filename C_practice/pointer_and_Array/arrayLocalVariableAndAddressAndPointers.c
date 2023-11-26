#include<stdio.h>

int func1()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	return *arr;
}
int* func()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	printf("%p\n",arr);
	return arr;
}
int main()
{
	int *d;
	d=func();
	printf("%p\n",d);
	//uncomment next line,it will give segfault
	//printf("%d \t%d \n",*d,*(d+1));
	
	int v = func1();
	printf("%d\n",v);
return 0;
}







