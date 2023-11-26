#include<stdio.h>

int mul(int a, int b, int c)
{
	return a*b*c;

}
void main()
{
	int *fp;
	fp=mul;//warning: assignment from incompatible pointer type
	printf("the product %d",fp(2,3,4));//error: called object ‘fp’ is not a function or function pointer

}




