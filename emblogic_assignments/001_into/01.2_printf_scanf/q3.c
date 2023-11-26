

#include<stdio.h>
int main()
{
	int intvar=24;
	static int x= intvar;
	printf("%d,%d",intvar,x);


	int const intvar1=24;
	static int x1= intvar1;
	printf("%d,%d",intvar1,x1);


	static int z=99;
	printf("%d",z);
	return 0;

}





