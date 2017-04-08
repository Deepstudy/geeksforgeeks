#include<stdio.h>
#include<stdlib.h>

int findmin(int *inp,int low,int high);
int main()
{
	int n;
	scanf("%d",&n);
	int i,inp[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&inp[i]);
	}
	int min=findmin(inp,0,n-1);
	printf("%d\n",inp[min]);
	return 0;
}
int findmin(int *inp,int low,int high)
{
	if(high<low)
		return;
	int mid=low+(high-low)/2;
	if inp[mid]>inp[mid-1]
	{
		findmin(inp,mid,high);
	}
	else if(inp[mid]<inp[mid-1])
		return mid;

}
