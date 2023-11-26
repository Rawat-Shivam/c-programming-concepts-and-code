#include<stdio.h>

void f(int);
void (*foo)(float)=f;//warning: initialization from incompatible pointer type

int main()
{

	foo(10);
	//foo(19986);
}

void f(int i)
{

	printf("%d\n",i);
}
