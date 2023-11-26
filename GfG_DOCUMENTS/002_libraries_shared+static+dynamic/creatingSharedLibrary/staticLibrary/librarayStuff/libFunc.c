
#include<stdio.h>

void libFunc()
{
	printf("Begin:: file:%s, func:%s\n",__FILE__,__func__);
	printf("This is static library function...\n");
	printf("End:: file:%s, func:%s\n",__FILE__,__func__);

}

