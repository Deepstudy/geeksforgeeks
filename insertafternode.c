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
	printf("\n");
}

struct node *insert(struct node *head,int val)
{
	struct node *temp,*root=head;
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

struct node *insertatn(int n, struct node *head,int value)
{
	struct node*temp,*root=head;
	if (head == NULL && n!=0)
	{
		return NULL;
	}

	temp=(struct node*)malloc(sizeof(struct node));
	int count=0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	if(n <= count)
	{
		head = root;
		temp->data = value;
		temp->next=NULL;
		if(n==0)
		{
			temp->next = head;
			return temp;
		}
		int i;
		for(i=1; i < n;i++)
		{
			head = head->next;
		}
		struct node* nextnode = head->next;
		head->next = temp;
		temp->data= value;
		temp->next = nextnode;
		return root;
	}
	else 
	{
		printf("value of n %d exceeds the length %d of linkedin list\n",n,count);
		return root;
	}
}


int main()
{ struct node *head = NULL;
	head = insert(head , 5);
	head = insert(head , 6);
	head = insert(head , 9);
	printlist(head);
        head = insertatn(2,head,10); 
	printlist(head);
        head = insertatn(5,head,10); 
	printlist(head);
        head = insertatn(0,head,1); 
	printlist(head);
}
