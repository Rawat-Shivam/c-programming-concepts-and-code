
// & address_of
// * value_at

#include<stdio.h>

int main()
{
	int *n1;
	int *n2;

	//n1=4; // ERROR: conversion of integer to pointer
	//n2=6; // ERROR: conversion of integer to pointer

	
	//*n1=4; //ERROR : segmentation fault since it is trying to derefrence a address hold by pointer which is not there 
	
	//*n2=6; //ERROR : segmentation fault since it is trying to derefrence a address hold by pointer which is not there 

	int a=4;
	int b=6;

	n1=&a;
	n2=&b;
	
	//int sum= n1+n2; //ERROR: invalid operands to binary + (have ‘int *’ and ‘int *’)

	int sum1= *n1+*n2;
	
	printf(" ___%d___%d\n",*n1,*n2);
	printf(" %d\n",sum1);	
	
	
return 0;
}


