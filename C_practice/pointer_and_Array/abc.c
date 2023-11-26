#include<stdio.h>

int main(int argc, char* argv[], char * envp[])
{
        printf("You have entered %d no of arguments\n",argc);

        for (int i = 0; i < argc; ++i)
	{
	       	printf("%s",argv[i]);
		printf("\n");
	}


        //for (int i = 0; envp[i] != NULL; i++)
          	//printf("\n%s", envp[i]);
    
    	return 0;
}

