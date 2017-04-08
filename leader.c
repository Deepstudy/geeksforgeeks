#include<stdio.h>
void leader( int a[] , int n)
{
	int i = n-1;
	int j = n-2;
	printf(" %d " , a[i]);
	for( j = n-2; j >= 0; j--)
	{
		if( a[j] > a[i] )
		{
			printf("%d" , a[j]);
			i = j;
		}
	}

}
int main()
{
	int arr[] = {22,24,23, 7, 3, 8, 2, 5, 20 ,8};
	leader( arr , 10);
}


