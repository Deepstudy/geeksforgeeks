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
struct node* delfirst(struct node* head)
{
	struct node *temp;
	temp = head;
	head = head->next;
	free(temp);
	return head;
}

int main()
{ struct node *head = NULL;
	head = insert(head , 5);
	head = insert(head , 6);
	head = insert(head , 9);
	head = insert(head , 10);
	printlist(head);
	printf("\n");
	head = delfirst(head);
	printlist(head);


}

