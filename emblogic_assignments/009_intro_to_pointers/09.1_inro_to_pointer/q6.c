#include<stdio.h>
int main ()
{
	int b=0;
	int a=9;
	//int *n1=a,*n2=b; //warning: initialization makes pointer from integer without a cast 
	int *n1=&a,*n2=&b;
	if(*n1<*n2)
		printf("a<b\n");
	else
		printf("a>b\n");
	if(&n1<&n2)
		printf("&n1<&n2\n");
	else
		printf("&n1>&n2\n");
	if( n1<n2  &&  &a<&b )
		printf("n1<n2 and &a<&b\n");
	else
		printf("n1>n2 and &a>&b\n");
	return 0;
}



