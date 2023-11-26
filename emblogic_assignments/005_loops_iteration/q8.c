
#include<stdlib.h>
#include<stdio.h>
int main()
{
	
	int n,r,d;
	int count=1;
	scanf(" %d",&n);
	printf("\n");
	if(n<10)
	{  
		printf("%d no of digits\n",count);
		exit(0);
	}
	do
	{
		d=n/10;
		printf("the new divided number is %d\n",d);
		if(d<10)
		{
			printf("inside if : going to exit \n");
			count++;
			break;
		}
		count++;
		n=n/10;
		
	}
	while(n>=10);
	
	printf("%d no of digits\n",count);
	
	
return 0;
}














