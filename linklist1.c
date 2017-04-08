#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};


void printlinklist( struct node *a)
{
         while(a != NULL)
	  {
		  printf(" %d " , a->data);
		           a=a->next;
		    }

}

int main()
{
struct node* head = NULL;
struct node* second = NULL;
head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
struct node* key =(struct node*)malloc(sizeof(struct node)) ;
key = head;



head->data = 5;
head->next=second;
second->data=10;
second->next=NULL;
printlinklist(key);

return 0;
}




