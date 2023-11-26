#include<stdio.h>
typedef struct
{
	unsigned int x;
	unsigned int y:33; //error: width of ‘y’ exceeds its type

	unsigned int z;

}test;

test t;

int main()
{
	
	printf("%d",sizeof(t));
		
return 0;
}
