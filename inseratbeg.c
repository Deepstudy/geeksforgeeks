#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* insert(struct node* head, int value)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp ->data = value;
	temp ->next = head;
	return temp;
}
void printlist(struct node* a)
{
	while( a!= NULL)
	{
		printf (" %d " , a->data);
		a = a->next;
	}
}

int main()
{
	struct node*head = NULL;
	head = insert(head, 5);
	head = insert(head, 6);
	head = insert(head ,7);
	printlist(head);

}

