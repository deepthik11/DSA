#include<stdio.h>
#include<stdlib.h>
struct bst
{
   int data;
   struct bst*left;
   struct bst*right;
};
typedef struct bst Node;
Node*node;
Node*createtree(Node *node,int data)
{
  if(node==NULL)
  {
     Node *temp;
     temp=(Node*)malloc(sizeof(Node));
     temp->data=data;
     temp->left=temp->right=NULL;
     return temp;
  }
  if(data<(node->data))
  {
     node->left=createtree(node->left,data);
  }   
  if(data>(node->data))
  {
     node->right=createtree(node->right,data);
  }        
  return node;
}
void inorder(Node *node)
{
   if(node!=NULL)
   {
      inorder(node->left);
      printf("%d\t",node->data);
      inorder(node->right);
   }
}  
void preorder(Node *node)
{
   if(node!=NULL)
   {
      printf("%d\t",node->data);
      preorder(node->left);
      preorder(node->right);
   }
}        
void postorder(Node *node)
{
   if(node!=NULL)
   {
      postorder(node->left);
      postorder(node->right);
      printf("%d\t",node->data);
   }
}
Node *search(Node *node,int data)
{
   if(node==NULL)
   printf("\nElement not found");
   else if(data<node->data)
   {
      node->left=search(node->left,data);
   }
   else if(data>node->data)
   {
      node->right=search(node->right,data);
   }
   else
   printf("\nElement found is %d",node->data);
   return node;
}
void main()
{
   int data,ch,i,n;
   Node *root=NULL;
   printf("\n1.BST Insertion  2.Inorder  3.Preoder  4.postorder  5.search Element  6.Exit");
   while(1)
   {
      printf("\nEnter your choice");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:printf("\nEnter N value\n");
                scanf("%d",&n);
                printf("\nEnter the values to create BST\n");
                for(i=0;i<n;i++)
                {
                   scanf("%d",&data);
                   root=createtree(root,data);
                }
                break;
        case 2:printf("\nInorder Traversal:\n");
               inorder(root);
               break;
        case 3:printf("\nPreorder Traversal:\n");
               preorder(root);
               break;    
        case 4:printf("\nPostorder Traversal:\n");
               postorder(root);
               break;                            
        case 5:printf("\nEnter the element to search:\n");
               scanf("%d",&data);
               root=search(root,data);
               break;
        case 6:exit(0);
        default:printf("\nWrong option");
                break;
     }
   }
}                       
               
  
