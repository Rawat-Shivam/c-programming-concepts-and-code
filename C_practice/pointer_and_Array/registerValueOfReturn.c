//use objdump -S a.out to see the assembly code....and see the register accumulator "eax" which store return value

#include<stdio.h>

int * MY_function()
{
	int a=10;
	printf("address:%p\n",&a);
	return &a;
}



int main()
{
	MY_function();
	return 99;
}








