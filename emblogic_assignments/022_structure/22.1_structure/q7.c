#include<stdio.h>

struct student
{

	int i=9;//error: expected ‘:’, ‘,’, ‘;’, ‘}’ or ‘__attribute__’ before ‘=’ token

	char c;
};
int main()
{
	struct student s;
	//due to above error, we get this error also mentioned below
	s.i=8;//error: ‘struct student’ has no member named ‘i’
	printf("hello");
	
return 0;
}
