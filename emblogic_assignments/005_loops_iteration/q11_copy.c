#include<stdio.h>
#include<string.h>

int main()
{
	
	char arr[5][9];
	int i=0,j=0;
	memset(arr,'_',sizeof(arr));
	//arr[0][4]='*';
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			arr[i][4]='*';
			arr[i][4+j]='*';
			arr[i][4-j]='*';
		}
	}


	
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
		
			printf(" %c ",arr[i][j]);
		}
			printf("\n\n");
	}

return 0;
}

