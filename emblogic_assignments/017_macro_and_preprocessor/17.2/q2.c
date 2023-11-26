#include<stdio.h>
#define MAX 1000
int main()
{
	int MAX=100;

/*****************************************************
  q2.c: In function ‘main’:
q2.c:2:13: error: expected identifier or ‘(’ before numeric constant
 #define MAX 1000
             ^
q2.c:5:6: note: in expansion of macro ‘MAX’
  int MAX=100;
      ^~~

********************************************************/
	printf("%d\n",MAX);
	printf("%d\n",888);

	return 0;

}
