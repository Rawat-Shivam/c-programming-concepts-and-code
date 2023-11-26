#include<stdio.h>
int main()
{
	
	int a[5]={5,4,3,2,1};
	int *p=a;
	//p=a;	//okay
	//p=&a;	// WARNING
	printf("\n\n");
	printf("first addressess in pointer and array:\n");
	printf("%p\t%p\n",p,a);
	printf("first value in pointer and array:\n");
	printf("%p\t%p\n",*p,*a);
	
	
	
	//printf("%p\t%p\n",p++,a++);// error: lvalue required as increment operand for a 
	//printf("%p\t%p\n",*p++,*a++);// error: lvalue required as increment operand for a
	
	
	printf("\n\n");
	printf("next address and value in pointer\n");
	printf("%p\t\n",++p);
	printf("%p\t\n",*p);
	
	
	
	
	printf("\n\n");
	printf("next address and value in pointer\n");
	printf("%p\t\n",++p);
	printf("%p\t\n",*p);
	
	printf("%p\t\n",&(a)+1);
	
	printf("\n\n");
	printf("first address and value in array\n");
	printf("%p\t\n",&a[0]);
	printf("%p\t\n",a[0]);
	
	
	
	printf("\n\n");
	printf("second address and value in array\n");
	printf("%p\t\n",&a[1]);
	printf("%p\t\n",*(a+1));
	
	
	

return 0;
}
