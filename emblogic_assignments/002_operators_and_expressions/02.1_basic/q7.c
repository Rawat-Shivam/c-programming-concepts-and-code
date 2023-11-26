#include<stdio.h>

int main()
{
	
	int a,b;
	printf("enter values for a and b\n");
	scanf(" %d%d",&a,&b);
	printf("integer: a=%d,b=%d\n",a,b);
	printf("character: a=%c,b=%c\n",a,b);

	printf("lets swap.....\n");
	
	printf("before swap a=%d,b=%d\n",a,b);
/********************************************************/

// a = b - a;
// b = b - a;
// a = b + a;

// a = a + b;
// b = a - b;
// a = a - b;

// a = (a + b) - (b = a);

/********************************************************/

// a = a * b;
// b = a / b;
// a = a / b;	

// a = (a * b) / (b = a);

/********************************************************/

/* a = a ^ b;
   b = a ^ b;
   a = a ^ b;

This method is perhaps a bit more efficient, because it uses bitwise operator only. It can also be written in a more compact manner like this:

a ^= b;
b ^= a;
a ^= b; */

/********************************************************/
/*	
	a ^= b ^= a ^= b;
This is similar to method 4 but three statements have been compounded into one. Order of evaluation is from right to left. 	
*/	
	

//Using a file as buffer


//Using a command-line-related variable as buffer
/*
int main(int argc, char **argv)
{
    int a = 10, b = 5;

    argc = a;
    a = b;
    b = argc;

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
*/

/*
#define SWAP(x, y, Type) Type temp = x; x = y; y = temp;
 
int main()
{
    int a = 10, b = 5;
 
    SWAP(a, b, int);
 
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
*/

//The same SWAP macro will work for types like int, float and char. By using this GCC-specific extension, we can improve it further like:	
//#define SWAP(x, y) typeof(x) temp = x; x = y; y = temp;


	a ^= b;
	b ^= a;
	a ^= b;
	printf("after swap a=%d,b=%d\n",a,b);
	
	return 0;
}


