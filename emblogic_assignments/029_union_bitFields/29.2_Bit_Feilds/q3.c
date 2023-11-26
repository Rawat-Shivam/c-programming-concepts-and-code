#include<stdio.h>

struct test
{

	unsigned int x;
	//long int y:3;
	//long int y:32;
	long int y:60;
	unsigned int z;
};
int main()
{
	struct  test t;

	unsigned int *ptr1=&t.x;
	unsigned int *ptr2=&t.z;
	
	printf("%d",ptr2-ptr1);
	
//you can find size of any data type 
return 0;
}


