#include<stdio.h>

struct student
{
	int i;
	char c;
	float f;
};


int main()
{
	//struct student s={.i=2,.c=p,.f=4.4}; //error: ‘p’ undeclared (first use in this function)
	
	struct student s={.i=2,.c='p',.f=4.4};

	printf("%d,%c,%f\n",s.i,s.c,s.f);

return 0;
}
