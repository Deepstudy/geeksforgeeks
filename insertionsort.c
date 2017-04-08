#include<stdio.h>
#include<math.h>





void swap(int *x, int *y) {

	   int temp;
	      temp = *x;    /* save the value at address x */
	         *x = *y;      /* put y into x */
		    *y = temp;    /* put temp into y */
		      
		       return;
}




void insertionSort(int arr[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		for(k=i;k>0;k--)
		{
		if (arr[i]<arr[i-k])
			swap(&arr[i],&arr[i-k]);
		}
	}

}

void printArray(int arr[], int n)
{
	   int i;
	      for (i=0; i < n; i++)
		             printf("%d ", arr[i]);
	         printf("\n");
}
 
 
 
/* Driver program to test insertion sort */
int main()
{
	    int arr[] = {12, 11, 13, 5, 6};
	        int n = sizeof(arr)/sizeof(arr[0]);
		 
		    insertionSort(arr, n);
		        printArray(arr, n);
			 
			    return 0;
}
