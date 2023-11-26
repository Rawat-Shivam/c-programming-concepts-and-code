#include<stdio.h>
void f( int(*x)(int) );
int myfoo(int i);
int (*foo)(int)= myfoo;

int main()
{
	printf("%s::Begin\n",__func__);
	
	f(foo(10));//warning: passing argument 1 of ‘f’ makes pointer from integer without a cast 
	
	printf("%s::End\n",__func__);
}

void f( int (*i)(int) )
{
	printf("%s::Begin\n",__func__);
	
	i(11);
	
	printf("%s::End\n",__func__);
}
int myfoo(int i)
{
	printf("%s::Begin\n",__func__);
	
	printf("myfoo::%d\n",i);
	
	printf("%s::End\n",__func__);
return i;
}



