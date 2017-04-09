#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 256
int max(int a, int b)
{

	if(a > b)
		return a;
	else  return b;
}
int longestUniqueSubstr( char *str)
{
	int n = strlen(str);
	int count[max] = {0};
	int length= 0;
	int prevlength = 0;
	int i = 0;
	int ans;
	while(i < n)
	{
		if(count[a[i]] == 0)
		{
			length++;
			count[a[i]] = 1;
			i++'
		}

		int ans = max(length , prevlength);

		else if(count[a[i]] == 1)
		{
			prevlength = length;
			count[max] = {0};
			length = 0;
		}
	}
	return ans;
}













int main()
{
	char str[] = "ABDEFGABEF";
	printf("The input string is %s \n", str);
	int len =  longestUniqueSubstr(str);
	printf("The length of the longest non-repeating "
			"character substring is %d", len);
	return 0;
}
