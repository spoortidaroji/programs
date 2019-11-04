#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int data;
struct node * left;
struct node * right;
};
struct node * pushbst(int *arr,struct node * root, int key)
{
if(root==NULL)
{
struct node * temp=(struct node *)malloc(sizeof(struct node));
temp->data=key;
temp->left=NULL;
temp->right= NULL;
root=temp;
return root;
}
else if(root->data<key)
root->right= pushbst(arr,root->right,key);
else
root->left= pushbst(arr,root->left,key);
return root;
}
int height (struct node * root)
{
if(root==NULL)
return 0;
if(height(root->left)>height(root->right))
return 1+ height(root->left);
else
return 1+ height(root->right);
}
int main()
{
struct node * root= NULL;
int n,i;
scanf("%d",&n);
int * arr=(int *)malloc(n*2);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{ root=pushbst(arr,root,arr[i]);
}
printf("%d" ,height(root));return 0;
}
