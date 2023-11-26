// 0=positive
// 1=negative
#include<stdio.h>
typedef struct
{
	int i:2;
	unsigned int k:2;
}bf;

int main()
{
//	int i:2; ERROR ':'

	bf b;

	printf("enter the int bit_feild:2\n");
//	scanf(" %d",&i);
//	printf("::%d::\n",i);
	
//	scanf(" %d",&b.i); //ERROR:error: cannot take address of bit-field ‘i’
//	scanf(" %d",b.i);//segmentation fault

	int j;

	scanf(" %d",&j);
	
	b.i=j;
	b.k=j;

	printf("j=%d\tb.i=%d\tb.k=%d\n",j,b.i,b.k);


return 0;
}


