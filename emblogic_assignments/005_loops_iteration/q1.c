#include<stdio.h>
extern int sum;
int sum;
int main()
{
	int i;
	
	printf("sum is %d",sum);
	
	for(i=1;i<=5;i++)
	sum=sum+i;

	printf("sum of first %d natural numbers is %d\n",--i,sum);


return 0;
}
