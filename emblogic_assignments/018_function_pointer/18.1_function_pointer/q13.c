#include<stdio.h>

void f(int);
void (*foo)(void)=f;// warning: initialization from incompatible pointer type

int main()
{
	
	foo(10);// error: too many arguments to function ‘foo’
	//foo();//it will print 1;
return 0;
}

void f(int i)
{

	printf("%d\n",i);
}
