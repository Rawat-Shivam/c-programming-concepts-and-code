#include<stdio.h>

/***************************************
 *
void first()
{
	printf("H.. W.. \n");
}

void main()
{
	void *ptr()=first;
	ptr();
	ptr++;

}

//q5.c: In function ‘main’:
//q5.c:11:2: error: function ‘ptr’ is initialized like a variable
//  void *ptr()=first;
//  ^~~~
//q5.c:16:5: error: lvalue required as increment operand
//  ptr++;
//     ^~
//q5.c:11:8: error: nested function ‘ptr’ declared but never defined
//  void *ptr()=first;
//        ^~~
******************************************** 
*/


int first()
{
	printf("H.. W.. \n");
}

void main()
{
	int (*ptr)()=first;
	printf("---%p---\n",ptr);
	ptr();
	ptr++;
	printf("---%p---\n",ptr);
	ptr();

}


