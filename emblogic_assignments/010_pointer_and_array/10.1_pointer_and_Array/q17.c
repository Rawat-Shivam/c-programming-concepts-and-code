#include<stdio.h>
int main()
{
	int (*a)[6];
	printf("pointer address:%p and its value::%p \n", &a, *a);
	printf("enter elements::\n");
	for(int i=0; i<6; i++)
	{
		printf("elemet %d address::%p \n", i, (*a+i));
		scanf(" %d", (*a+i));
	}
	printf("you entered::");
	for(int i=0; i<6; i++)
	{
		printf("%d, ",*(*a+i));
	}
	printf("\n");
	printf("lets find the repetited element::\n");
	for(int i=0; i<6; i++)
	{
		int x=*(*a+i);
		for( int j=0; j<=0; j++)
		{
			if(*(*a+j)==x)
			{
				printf("repetition found :%d\n",x);
			}
		}
	}
	
	printf("\n");
	
return 0;
}







