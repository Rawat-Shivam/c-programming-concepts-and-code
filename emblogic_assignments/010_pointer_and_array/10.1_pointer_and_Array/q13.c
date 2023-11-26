#include<stdio.h>
int main()
{
	int s=4;
	
	int x=0,y=1,z=2;
//error: variable-sized object may not be initialized
//warning: excess elements in array initializer

//	int a1[s]={x,y,z};
	int a11[s];
	a11[0]=x;
	int a2[s];
//	int a3[s]={1,2,3,4};//warning
//	int a4[s]={99,77,55,33};//warning
	
return 0;
}
