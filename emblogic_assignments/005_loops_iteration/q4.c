#include<stdio.h>

int main()
{
	int i,k;
	int n1=0, n2=1;
	printf("\n");
	printf("%d %d ",n1,n2);
	for(i=2;i<=10;i++)
	{
		k=n1+n2;
		
		printf("%d ",k);
		n1=n2;
		n2=k;
	}
	
return 0;
}

