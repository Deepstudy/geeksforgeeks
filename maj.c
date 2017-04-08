#include<stdio.h>
int binarysearch( int arr[] , int high , int low, int key)
{
	int mid = low + (high-low)/2;

	while(high >= low)
	{
		if(( mid == 0 || arr[mid-1] <key) && (arr[mid] == key))
				return mid;
		else if( arr[mid] < key)
			return binarysearch(arr , high , mid+1 , key);
		else 
			return binarysearch(arr , mid-1, low , key);
	}
	return -1;
}
bool ismajority(int arr[] , int size , int key)
{
	int i = binarysearch( arr, size-1 , 0 , key);
		if( arr[i+ (n/2)] == key)
			return 1;
		else 
			return 0;
}


		


				
