#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void printlist( struct node*a)
{
	while(a != NULL)
	{
		printf(" %d " , a->data);
		a = a->next;
	}	

}

struct node *insert(struct node *head,int val)
{
	struct node *temp,*root;
	root = head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
		return temp;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=temp;
	return root;
}
int getnth(struct node *head, int n)
{
if(head == NULL & n!=0)
	return 0;
struct node *root = head;
int count = 0;
while(head != 0)
{
	count++;
	head = head->next;
}
printf("the count is %d" , count);
printf("\n");
head = root;
if(n<= count)
{
	int i;
for(i=1; i<n; i++)
	head= head->next;
return  head->data;
}
else
{
	printf("irrelevant\n");
	return 0;
}
}
int main()
{ struct node *head = NULL;
	head = insert(head , 5);
	head = insert(head , 6);
	head = insert(head , 9);
	head = insert(head , 11);
	printf( " \n");
	int d = getnth(head, 3);
	printf ("the nth element is %d" , d);
	printf( " \n");
	printlist(head);
        int a = getnth(head , 6);
	printf(" %d" , a);
}






