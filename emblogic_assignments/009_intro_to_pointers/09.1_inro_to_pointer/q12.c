#include<stdio.h>
int main()
{
	int n;
	int *p;
	int prod=1;


	printf("enter thr number:");
	scanf(" %d",&n);
	printf("\n");

	p=&n;

	for(int i=0; *(p)!=0; i++)
	{
		prod=prod*(*p)--;
		
	}

	printf("the factorial:%d\n",prod);
return 0;
}


