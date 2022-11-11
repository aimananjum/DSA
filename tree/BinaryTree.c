#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node* left;
   struct node* right;
};
struct node* newNode()
{  int data;
   printf("Enter data : \n");
   scanf("%d",&data);
   struct node* node = (struct node*)malloc(sizeof(struct node));

   if(data==-1){
      return NULL;
   }
   node->data = data;

   printf("Enter data for left of %d :\n",data );
   node->left = newNode();
   printf("Enter data for right of %d :\n",data );
   node->right = newNode();

   return (node);
}

void inorder(struct node *node){
   if(node==NULL){
      return;
   }
   inorder(node->left);
   printf("%d ",node->data );
   inorder(node->right);
}

void preorder(struct node *node){
   if(node==NULL){
      return;
   }
   printf("%d ",node->data );
   preorder(node->left);
   preorder(node->right);
}
void postorder(struct node *node){
   if(node==NULL){
      return;
   }
   postorder(node->left);
   postorder(node->right);
   printf("%d ",node->data );
}


int main()
{
   /*create root*/
   struct node* root = newNode();
   printf("\nInorder :\n");
   inorder(root);
   printf("\npreorder :\n");
   preorder(root);
   printf("\npostorder :\n");
   postorder(root);


   getchar();
   return 0;
}
