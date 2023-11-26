#include<stdio.h>
int main()
{
	int count=0;
	int f=1;
	while(f<=255)
	{
		count++;
		printf(" %c %d \n",f,f);
		f++;
	
	}

	printf("\ncount:%d \n",count);
return 0;
}
