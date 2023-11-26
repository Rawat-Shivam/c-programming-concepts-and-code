#include<stdio.h>
int main()
{
	int a[4]={7,8,9,0};
	int p[4];
	p=a;//ERROR: assignment to expression with array type

	printf("%d\n",p[1]);
	
return 0;
}
