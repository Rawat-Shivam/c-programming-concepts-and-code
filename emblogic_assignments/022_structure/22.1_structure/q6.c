#include<stdio.h>

struct student
{

	int i;
	char c;
} // error: expected ‘;’, identifier or ‘(’ before ‘int’

int main()
{
	struct student s;
	s.i=8;
	printf("hello");
	
return 0;
}
