#include<stdio.h>

int main()
{
	
	unsigned int i=65535;

	printf("----------------\n");
	while(++i!=0)
	{
	printf("----+++++++++++++++++------------\n");
		printf("%d",i);
		sleep(1);
	}
	printf("\n");
	
return 0;
}

