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
int mid( struct node *head)
{
	if(head == NULL)
		return 0;
	struct node*root = head;
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	head = root;
	int n = (count/2)+1;
	int i;
	for (i=1; i<n; i++)
	head = head->next;
	int d = head ->data;
	return d;
}
	




int main()
{ struct node *head = NULL;
	printf("%d" , mid(head));
	head = insert(head , 5);
	head = insert(head , 6);
	head = insert(head , 9);
	head = insert(head , 11);
	head = insert(head , 13);
	printlist(head);
	printf("%d\n" , mid(head));
        head = insert(head , 15);
	printf("%d\n" , mid(head));
	

}






