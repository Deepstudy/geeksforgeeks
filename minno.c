#include<stdio.h>
void findmin( int n , int s)
{
	int d[n];
	int sum = s;
	int i;
	int j;
	for( j = 0; j < n ; j++)
	{
		for(i = 1; i < 10; i++)
		{
			int reqsum;
			int maxsum;
			reqsum = sum - i;
			maxsum = ( n - (j+1))* 9;
			if( maxsum >= reqsum)
			{
				d[j] = i;
				sum = sum - d[j];
				break;
			}
		}
	}
	int k;
	for(k = 0; k < n; k++)
	{ 
		printf( "%d" , d[k]);
	}
}

int main()
{
	int n = 3;
	int s = 24;
	findmin( n , s);
	return 0;

}

