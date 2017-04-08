#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};


struct node* newnode( int val)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = val;
	temp -> left = NULL;
	temp -> right = NULL;
}

void printInorder( struct node* root)
{
	if(root == NULL)
		return;
	printInorder(root -> left);
	printf( " %d " , root-> data);
	printInorder( root -> right);

}
void printPostorder( struct node *root)
{
	if(root == NULL)
		return;
	printPostorder(root -> left);
	printPostorder(root -> right);
	printf( "%d", root -> data);
}

void printPreorder( struct node* root)
{
	if(root == NULL)
		return;
	printf("%d" , root -> data);
	printPreorder(root -> left);
	printPreorder(root -> right);
}

int size(struct node* root)
{
	if (root == NULL)
		return 0;
	else
		return (size(root ->left) + 1 + size(root ->right));
}


int main()
{
	struct node* root = newnode(1);
	root -> left = newnode(2);
	root -> right = newnode(3);
	root -> left -> left = newnode(4);
	root -> left -> right = newnode(5);
	printInorder(root);
	printf(" \n");
	printPreorder(root);
	printf(" \n");

	printPostorder(root);
	printf(" \n");

	printf( " the size of tree is %d " , size(root));


}

