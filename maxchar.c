#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256
char maxchar(char* str)
{
 int count[256] = {0};
 int len = strlen(str);
 int i;
 for( i = 0; i<len ; i++)
 {
	 count[str[i]]++;
 }

 int max = 1;
 char result;
 int j;
 for(j = 0; j < len; j++)
 {
	 if(max < count[str[j]] )
	 {
		 max = count[str[j]];
		 result = str[j];
	 }
	 
 }
 return result;
}
int main()
{
	char str[256];
	printf("enter a string upto 256 letters\n");
	scanf(" %s " , str);
	char val = maxchar(str);
	printf(" %c " , val);
}


