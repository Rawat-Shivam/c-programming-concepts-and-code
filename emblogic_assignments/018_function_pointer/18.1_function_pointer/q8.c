#include<stdio.h>

void f(int(*x)(int));
int myfoo(int);
int (*fooptr)(int);
int ((*foo(int)))(int);

int main()
{

	fooptr=foo(0);
	fooptr(10);
}
int ((*foo(int i))) (int)
{

	return myfoo;
}
int myfoo(int i)
{
	printf("%d\n",i+1);
}

