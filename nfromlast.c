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
void printfrmlast( struct node *head, int n)
{
	struct node*root =head;
int i;
	for(i = 1; i <n ; i++)
		head = head->next;
	struct node *ref= root;
	while(head->next != NULL)
	{
		head = head->next;
		ref = ref->next;
	}
	printf( "%d" , ref->data);
}


int main()
{ struct node *head = NULL;
	head = insert(head , 5);
	head = insert(head , 6);
	head = insert(head , 9);
	head = insert(head , 11);
	head = insert(head , 13);
	head = insert(head , 15);
	printfrmlast(head,3);


	printlist(head);

}






