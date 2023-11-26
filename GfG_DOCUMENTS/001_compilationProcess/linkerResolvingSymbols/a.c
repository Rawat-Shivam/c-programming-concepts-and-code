/*
	gcc a.c f.c
	gcc a.c f.c -Wall -Wextra
	gcc a.c f.c -fno-common
*/	
#include<stdio.h>
int x;
void f();
int y=100;
int main()
{
	printf("before x=%d, y=%d\n",x,y);
	f();
	printf("after x=%d, y=%d\n",x,y);
return 0;
}

