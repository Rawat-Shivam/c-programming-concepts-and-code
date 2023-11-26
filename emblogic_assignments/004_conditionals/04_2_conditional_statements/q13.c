#include<stdio.h>
#include<math.h>
int main()
{

	int n =333;
	int i;
	int sum =0;

	for( i=0; i<=n; i++)
	{
		sum = sum+((pow(-1,i))*((2*i)+1));
	}
	printf("sum =%d \n",sum);
return 0;

}

