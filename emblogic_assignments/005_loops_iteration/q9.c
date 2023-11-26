#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("the begining\n");
	int nn=0;
	int count=1;
	int n;
	int n1;
	int r;
	scanf(" %d",&n);
	n1=n;
	printf("you entered number:%d\n",n);
	if(n<10)
	{  
		printf("%d no.of digits\n",count);
		exit(0);
	}
		
	do
	{	
		n=n/10;
		if(n<10)
		{	  
			count++;
			break;
		}
		count++;		
	}while(n>=10);

	printf("%d no.of digits\n",count);
	
	n=n1;
	do
	{	
		r=n%10;		
		printf("remainder %d\n",r);

		count--;
		nn=nn+(r*(pow(10,count)));
		printf("the new reversed number is %d\n",nn);
		
		n=n/10;
		printf("the old number changed to %d \n",n);
		

	}while(n>9);

	nn=nn+n;
	printf("%d the reversed number",nn);
	
return 0;	
}


