
//gcc registerPointer.c  -Wall -Wextra

#include<stdio.h>
char c;
register char *cp;

int i;
register int *ip;
int *ip=&i;


extern int var=10;
extern int var2;
int main()
{
cp=&c;
	var=100;
	var2=100;
return 0;
}







