#include<stdio.h>

/* Assuming -1 is filled for the places where element
   is not available */
#define NA -1

/* Function to move m elements at the end of array mPlusN[] */
void moveToEnd( int a[] , int size)
{
	int i = size - 1;
	int j = size - 1;
	while(i >= 0)
	{
		if(a[i] != NA)
		{	int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		
		}


		i--;
		if(a[j] != NA)
			j--;
	}
}
/* Merges array N[] of size n into array mPlusN[]
   of size m+n*/
int merge(int mPlusN[], int N[], int m, int n)
{
	int k;
	int i = n;
	int j = 0;
	for(k = 0; k < m+n; k++)
	{
		if((N[j] < mPlusN[i]) && (j < n) )
		{
			mPlusN[k] = N[j];
			j++;
		}
		else if((mPlusN[i] < N[j]) &&( i < m+n) )
		{
			mPlusN[k] = mPlusN[i];
			i++;
		}
		else if( j < n)
		{	mPlusN[k] = N[j];
			j++;
		}

		else if(i < m+n)
		{	mPlusN[k] = mPlusN[i];
			i++;
		}

	}
}	

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

/* Driver function to test above functions */
int main()
{
	/* Initialize arrays */
	int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
	int N[] = {5, 7, 9, 25};
	int n = sizeof(N)/sizeof(N[0]);
	int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;
	printArray(mPlusN , m+n);
	/*Move the m elements at the end of mPlusN*/
	moveToEnd(mPlusN, m+n);
	printArray(mPlusN , m+n);
	printArray(N , n);
	/*Merge N[] into mPlusN[] */
		merge(mPlusN, N, m, n);

	/* Print the resultant mPlusN */
		printArray(mPlusN, m+n);

	return 0;
}
