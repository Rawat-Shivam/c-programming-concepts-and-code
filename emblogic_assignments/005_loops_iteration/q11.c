#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	int n;
	char *arr=NULL;
	arr=(char*)malloc((sizeof(char)*45));
	memset(arr,'_',sizeof(arr));

printf("go to loops\n")	;

	for(int i=0;i<=4;i++)
	{
		printf("inside i=%d ---> going for j\n",i);
		
		for(int j=1; j<=i;j++)
		{
			*((arr+(i*9))+(5+j-1))='*';	
			*((arr+(i*9))+(5-j-1))='*';	
		}
	}

printf("go to print\n")	;

	for(int i=0;i<=4;i++)
	{
		for(int j=1;j<=9;j++)
		{
			printf(" %c",*(arr+(i*9)+j));
		}
			printf("\n\n");
	}
return 0;
}






