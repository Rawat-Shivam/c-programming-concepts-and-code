
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int* p = malloc(8);
	char *str;
	str = "GfG";

	*p = 100;
	free(p);
	*p = 110;
	*(str+1) = 'n';
	return 0;
}










