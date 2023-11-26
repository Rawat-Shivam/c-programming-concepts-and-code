


#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
    return (x+5);
}

int y = fun(20);


//int *pointer = (int*)malloc(sizeof(pointer));
int *pointer = (int*)malloc(sizeof(int));



int main(void)
{
	*pointer=100;
	static int *p = (int*)malloc(sizeof(p));
	*p = 10;
	printf("%d %d", *p ,*pointer);
    printf("%d ", y);
}


















