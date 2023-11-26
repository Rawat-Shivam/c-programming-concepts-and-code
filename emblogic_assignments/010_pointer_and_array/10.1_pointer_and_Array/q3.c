#include<stdio.h>
int  main()
{

	char *s="hello";
	char *p=s;

	printf("%p\t%p\n",p,s);
	printf("%c\t%c\n",*p,*s);
	printf("%c\t%c\n",p[0],s[0]);
//	printf("%c\t%c\n",[0]p,[0]s); ERROR
//	printf("%c\n",[0]s); ERROR

return 0;
}
