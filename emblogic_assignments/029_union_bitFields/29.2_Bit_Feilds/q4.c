#include<stdio.h>
union test
{
	unsigned int x:3;
	unsigned int y:3;

	int z;

};

int main()
{

	union test t;

	t.x=2;
	t.y=2;
	t.z=1;

	printf("t.x=%d,t.y=%d,t.z=%d",t.x,t.y,t.z);

	return 0;



}







