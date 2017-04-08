#include<stdio.h>
void seg(int a[] , int n)
{
	int i = 0;
	int j;
	for(j =n-1; j > i; j--)
	{
		if(a[i] == 0)
			i++;
		if(a[j] == 0)
		{
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	}
}
int main()
{
	int arr[] = { 0,1,0,1,0,0,1,0,1,0};
	int size = 10;
	seg(arr, 10);
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

}

