#include<stdio.h>
int main()
{
	static char a;
	static long b;
	int c;
	float i;
	
	printf("%d,%d,%d,%d\n",a,b,c,i);


	printf("%c,%c,%c,%c\n",a,b,c,i);

	
	printf("%f,%f,%f,%f\n",a,b,c,i);
	return 0;
}



