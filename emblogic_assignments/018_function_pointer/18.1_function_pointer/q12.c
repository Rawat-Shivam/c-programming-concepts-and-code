#include<stdio.h>

void f(int);
void (*foo)()=f;

int main()
{
	
	foo(10);
return 0;
}

void f(int i)
{

	printf("%d\n",i);
}
