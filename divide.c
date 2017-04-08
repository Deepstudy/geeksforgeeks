#include<stdio.h>
#include<strings.h>
void divideString(char *str, int n)
{
	int size;
	size = strlen(str);
	int eachpart;
	int i;
	if( size%n != 0)
	{
		printf(" not possible ");
		return;
	}
	eachpart = size/n;
	for(i = 0; i < size; i++)
	{
		if(i%eachpart == 0)
			printf(" \n ");
		printf( "%c" , str[i] );
	}

}
int main()
{
	char str[] = "minemuchmore";
	divideString( str , 3);
	return 0;
}


