
#include<stdio.h>
union u
{
	struct s
	{
		int x;
		char c;
	};
	struct s s1;
	struct s s2;
};
union u u1;
struct s s3;

int main()
{
	printf("enter int and char\n");
	scanf(" %d %c",&u1.s1.x,&u1.s1.c);
	
	printf("enter int and char\n");
	scanf(" %d %c",&u1.s2.x,&u1.s2.c);
	
	printf("enter int and char\n");
	scanf(" %d %c",&s3.x,&s3.c);
	
	printf("\n\n");
	
	printf("%d %c\n%d %c\n%d %c",u1.s1.x,u1.s1.c,u1.s2.x,u1.s2.c,s3.x,s3.c);
      	
	printf("\n");	
return 0;
}
