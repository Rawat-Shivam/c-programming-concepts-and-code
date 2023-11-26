#include<stdio.h>
int main()
{
	int a[3];
	int a1[3]={};
	int a2[3]={0};
	int x=0,y=0,z=0;
	int a3[3]={x,y,z};
	int a4[3]={1,2};

	
	for(int i=0; i<3; i++)
	{ 
		printf("%d\t",a[i]);
	}
	printf("\n");


	for(int i=0; i<3; i++)
	{ 
		printf("%d\t",a1[i]);
	}
	printf("\n");

	
	for(int i=0; i<3; i++)
	{ 
		printf("%d\t",a2[i]);
	}
	printf("\n");


	
	for(int i=0; i<3; i++)
	{ 
		printf("%d\t",a3[i]);
	}
	printf("\n");

	
	for(int i=0; i<3; i++)
	{ 
		printf("%d\t",a4[i]);
	}
	printf("\n");




return 0;
}

