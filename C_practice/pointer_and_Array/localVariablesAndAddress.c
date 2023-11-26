#include<stdio.h>
int* func1()
{
	int a=5;
	return &a;
}
int* func2()
{
	int a=5;
	return &a;
}
int main()
{
	int *d;
	d=func1();
	//here we are going to see the address of the variable ... 
	//but not its value 
	printf("%p\n",d);	

	d=func2();
	//here we are going to derefrence the address  ... 
	//and look for value into that address 
	//...! SEGMENTATION FAAUTL !... 
	printf("%d\n",*d);	

retun 0;
}





