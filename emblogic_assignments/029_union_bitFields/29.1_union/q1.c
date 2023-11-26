#include<stdio.h>

union u
{

	int i;
	float f;
	long int li;

	char c;
}u1;

int main()
{
	printf("enter the union members :\n int i, char c, float f, long int li\n");
	scanf(" %i",&u1.i);
	scanf(" %f",&u1.f);
	scanf(" %ld",&u1.li);

	scanf(" %c",&u1.c);

	printf("the union members ::\n int i=%d\n char c=%c\n float f=%d long int li=%ld\n",u1.i,u1.c,u1.f,u1.li);

return 0;
}
