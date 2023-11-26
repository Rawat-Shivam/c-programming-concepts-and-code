#include<stdio.h>
void func();

struct s
{

	//void func1(); //error: field ‘func1’ declared as a function
	void func3()
	{
		int a;
	}

	void func()
	{
		int a;
	}

};

void func1()
{
	int a;
}

int main()
{
	void func3();
	struct s s1;
return 0;
}
