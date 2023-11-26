#include<stdio.h>
int main()
{
	char *s="hello";
	char *p=s;

	printf("%c\t%c\n",*(p+3),s[3]);
return 0;
}
