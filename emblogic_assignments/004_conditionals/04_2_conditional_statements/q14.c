#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float eq;
	int ex;

	printf("enter the constants a,b,c ::\n");

	scanf(" %d%d%d",&a,&b,&c);
	printf("\n");

	if(a==0&&b==0)
	printf("there is no solution\n");
	else if(a==0)
	{
		c=-(a/b);
		printf("the only one root is:%d",c);
	}
	else if(((b*b)-(4*a*c))<=0)
	{
		printf("there are no real root\n");
	}
	else
	{
		printf("there are two real roots\n");
	}

return 0;
}





















