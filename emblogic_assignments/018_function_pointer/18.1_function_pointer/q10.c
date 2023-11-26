#include<stdio.h>

int mul(int a, int b, int c)
{
	return a*b*c;

}
void main()
{
	int (*fp)(int, int, int);
	fp=&mul;
	printf("the product %d",(*fp)(2,3,4));

}




