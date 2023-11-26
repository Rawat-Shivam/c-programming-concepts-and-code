#include<stdio.h>
#include<stdlib.h>
/*
 *
 *  this code is for removing just one space 
 *  if there are 3 spaces it will remove only one 
 *  and reduce it to 2 spaces  
 *
 *
				i=0;
				while((*(str+i)!='\0'))
				{
					printf("inside while with i=%d\n",i);
					if(*(str+i)==' ')
					{	
						if(*(str+(i+1))==' ')
						{
							printf("going to correct double spaces\n");
							for(int j=i;j<=size;j++)
							{
								*(str+j)=*(str+(j+1));
							}
	
						}
					}
					i++;
				}
*
*
*/



// but this code removes all spaces more then 1 
// if 5 spaces it will be left with only one space
int main()
{
	int i,k;
	char ch;
	char *str=NULL;
	int size=0;

	str=(char*)malloc(sizeof(char));	
	if(str==NULL)
	{
		perror("malloc(): FAILED");
		exit(EXIT_FAILURE);
	}

	printf("enter string:");
	while((ch=getchar())!='\n')
	{
		str=(char*)realloc(str,sizeof(char)*(size+1));
		if(str==NULL)
		{
			perror("realloc(): FAILED");
			exit(EXIT_FAILURE);
		}
		size++;
		*(str+(size-1))=ch;
	}
	*(str+size)='\0';
	printf("--------------------\n");
	printf("string length:%d\n",size);
	printf("--------------------\n");
	printf("string:%s\n",str);
	printf("--------------------\n");
	
//for(int m=0;*(str+m)!='\0');	


	k=0;

	while((*(str+k)!='\0'))
	{
		if(*(str+k)==' ')
		{	
			if(*(str+(k+1))==' ')
			{

				i=0;
				while((*(str+i)!='\0'))
				{
			//		printf("inside while with i=%d\n",i);
					if(*(str+i)==' ')
					{	
						if(*(str+(i+1))==' ')
						{
			//				printf("going to correct double spaces\n");
							for(int j=i;j<=size;j++)
							{
								*(str+j)=*(str+(j+1));
							}
	
						}
					}
					i++;
				}
			}
		}
		k++;
	}




printf("\n\n");
	printf("space reduced string:%s\n",str);
	printf("--------------------\n");

return 0;
}
