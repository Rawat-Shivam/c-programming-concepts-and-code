#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=arr+3;
	printf("%d\t%d\n",p[-2],arr[*p]);

return 0;
}
