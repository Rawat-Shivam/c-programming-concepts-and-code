#include<stdio.h>

void value( int n1, int n2)
{
	int sum =n1+n2;
	printf("___%d___%d__\n",n1,n2);
	printf("----%d---\n",sum);
}
void refrence( int *n1, int *n2)
{
	int sum= *n1+*n2;
	printf("___%d___%d__\n",n1,n2);
	printf("----%d---\n",sum);
}
int main()
{
	int a=9,b=5;
	int *n1=&a,*n2=&b;
	value(*n1,*n2);
	refrence(n1,n2);

return 0;
}


