



#include<stdio.h>
int initializer(void)
{
	return 50;
}

int main()
{
	static int i = initializer();
	
	static int y=20;
	static int z=y;

	int x=90;
	static int sx=x;

	

	int const j=100;
	static int sj=j;

	const static k=0;
	const static sk=k;
	printf(" value of i = %d", i);
	getchar();
	return 0;
}





