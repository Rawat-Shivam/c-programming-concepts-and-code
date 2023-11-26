#include<stdio.h>

int main()
{

	struct student 
	{
		int i;
		char c;
	
	};
	
	struct student s;
	//i=9;//error: ‘i’ undeclared (first use in this function)
	printf("%d",s.i);


return 0;
}
