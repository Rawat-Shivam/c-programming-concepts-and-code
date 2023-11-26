#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[26];
	int d=0;
	char c;
	int i=0,size=0;
	char *str=NULL;


	///////////////////////// making string ////////////////////////
	memset(arr,0,sizeof(arr));
	printf("memset done\n");
	
	str=(char*)malloc(sizeof(char));

	while((c=getchar())!='\n')
	{
		size++;
		str=(char*)realloc(str,sizeof(char));
		*(str+size-1)=c;
	}

	*(str+size)='\0';
	printf("string legth:%d\n",size);
	printf("string:");
	//for(i=0; i<size; i++)
	//{ 
	//	printf("%c",*(str+i));
	//}
	
	i=0;
	while(((*(str+i))!='\0')&& (++i))
	{
		printf("%c",*(str+i-1));
	}
	printf("\n");
	printf("string legth:%d\n",i);
	printf("------------------------------------------------------------------------------------------------\n");

	/////////////////////// logic for histogram ////////////////

//97-122
	
	

	printf("------------------------------------------------------------------------------------------------\n");
	for(i=0;i<size;i++)
	{	
		c=*(str+i);
		if(c==' ')
		{
			continue;
		}
		d=(int)c;
		printf(":;:;: %d",d);
		arr[d-97]++;
	}
	printf(" printimg frequency\n");

	for(i=0; i<26;i++)
		printf("%d  ",arr[i]);

	printf(" going for some stufffff\n");

	printf("\n\n");
	printf("  ");
	for(i=0;i<=20;i++)
		printf(" %d",i);

	
	printf("\n\n");
	
	i=0;	
	for(i=0;i<=25;i++)
	{
		printf("%c ",(65+i));
		for(int j=0;j<=arr[i];j++)
		{	
			printf(" =");
		}
		printf("\n");
	
	}
return 0;
}
