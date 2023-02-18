 # include <stdio.h>
 # include <stdlib.h>
 struct node{
	 int data;
	 struct node*rchild;
	 struct node*lchild;
	 };
	 struct node *root;

struct node* insert(struct node* root,int data){
struct node* newnode;
int count=1;
if(root==NULL)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	//yamete kudasaiii ahhh
	newnode->lchild=newnode->rchild=NULL;
	root=newnode;
	count++;
	}	 
else 
{
	if(count%2==0)
	{
		root->lchild=insert(root->lchild,data);
	}
	else
	{
	 root->rchild=insert(root->rchild,data);
			
	}
 }
 return root;
}

