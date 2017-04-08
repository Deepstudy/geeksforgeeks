#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ASCII_SIZE 256
void removedup(char* str)
{
	int count[ASCII_SIZE] = {0};
	int len = strlen(str);
	int k;
	for( k = 0; k<len ; k++)
	{
		count[str[k]]++;
	}

	char result;
	int i;
	int j = len - 1;
	for(i = len - 1; i >= len; i--)
	{
		if(count[str[i]] > 1 )
		{

		
			count[str[i]]--;
			str[i] = str[j];
			str[j] = '\0';
			j--;

		}


	}
	printf( " %s " , str);


}
int main()
{
	char str[ASCII_SIZE];
	printf("enter a string upto 256 letters\n");
	scanf(" %s " , str);
	removedup(str);

}


