#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256
void maxchar(char* str)
{
	int count[ASCII_SIZE] = {0};
	int len = strlen(str);
	int i;
	for( i = 0; i<len ; i++)
	{
		count[str[i]]++;
	}

	char result;
	int j;
	for(j = 0; j < len; j++)
	{
		if(count[str[j]] > 1 )
		{
		printf( " %c " , str[j]);
			count[str[j]]--;
			
		}

	}
	
}
int main()
{
	char str[256];
	printf("enter a string upto 256 letters\n");
	scanf(" %s " , str);
	 maxchar(str);
	
}


