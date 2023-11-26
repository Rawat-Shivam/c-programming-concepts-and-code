#include<stdio.h>
#include<math.h>
#include<unistd.h>
int main()
{


	//an amstrong number between two numbers
	//find no.of digit and multiply 
	//no.of digut with the each digit
	//dividing by ten and remainder is last digit of the number
	//and then for next digit divide number by ten 
	
	int i,i1;

	int n1,n2,sum=0,r;
	int size=0;
	printf("enter the starting number:");
	scanf(" %d",&n1);
	printf("\n");
	
	printf("enter the ending number:");
	scanf(" %d",&n2);
	printf("\n");


	for( i=n1; i<=n2; i++)
	{
		size=0;
		i1=i;
	//	printf("the number :%d\n",i1);

		if(i1<=9)
		{
			size++;
		}
		while(i1>0)
		{
			size++;
			i1=i1/10;
			//printf("----- :%d\n",i1);
			
		}
	//	printf("the no of digits :%d\n",size);
		
		i1=i;
		sum=0;
		while(i1!=0)
		{
			r=i1%10;
			sum= sum+(pow(r,size));
			i1=i1/10;
	//		printf(" while while sum=%d ,i=%d\n",sum,i);
		}

		if(i==sum)
		{
			printf("%d yo it is equal %d\n",sum,i);
			sum=0;
		}
	//sleep(2);
	}



return 0;

}
