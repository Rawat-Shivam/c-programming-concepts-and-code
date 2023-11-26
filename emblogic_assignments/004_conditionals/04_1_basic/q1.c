//vim /usr/include/limits.h

#include<stdlib.h>
#include<stdio.h>
int main()
{
	char ch;
	char *str=NULL;
	int size=0;
	int i=0;
	
	str=(char*)malloc(sizeof(char));
	
	printf("enter the string:");
	while((ch=getchar())!='\n')
	{
		*(str+size)=ch;
		str=(char*)realloc(str,sizeof(char));
		if(str==NULL)
		{
			perror("realloc()");
			exit(EXIT_FAILURE);
		}
		size++;
	}
	*(str+size)='\0';
	
	printf("\n");
	printf("string:");
	for(i=0; *(str+i)!='\0' ; i++)
	{
		printf("%c",*(str+i));
	}
	printf("\n");
	printf("value of i=%d  after printing string",i);
	printf("\n");

	for(i=0; *(str+i)!='\0' ; i++)	
	{
		if(*(str+i)=='	')
		{	
			*(str+i)='t';
			continue;
		}

	}
		
	printf("\n");
	printf("string:");
	for(i=0; *(str+i)!='\0' ; i++)
	{
		printf("%c",*(str+i));
	}
		
return 0;
}

