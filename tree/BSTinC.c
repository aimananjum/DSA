#include <stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left,*right;
};

struct node *newnode(int item){//50
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp ->data = item;//50
	temp->left=NULL;
	temp->right=NULL;

	return temp;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

struct node* insert(struct node* node,int data){//null 50 //null 50 null   30//null 30
	if(node==NULL){
		return newnode(data); //null 50 null
	}
	if(data<node->data){//30<50
		node->left = insert(node->left,data); //null 50 null , 30
	}
	else{
		node->right = insert(node->right,data);
	}
	return node;
} 

struct node* minValuenode(struct node* node){
	struct node* current = node;
	while(current && current->left != NULL){
		current=current->left;
	}
	return current;
}

struct node *deletenode(struct node* root,int data){// 50   // 30
	if(root== NULL) return root;                  // 40     
		if(data < root->data)  //30<50          //     
		root->left = deletenode(root->left,data);
	else if(data > root->data)//
		root->right = deletenode(root->right ,data);
	else{
		if(root->left == NULL){
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		struct node* temp =minValuenode(root->right);
		root->data = temp ->data;
		root->right = deletenode(root->right,temp->data);
	}
	return root;
}

void main(){
	struct node *root =NULL;
	root=insert(root,50);//null 50 null
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,40);
	root=insert(root,40);
	root=insert(root,40);
	root=insert(root,40);
	root=insert(root,40);
	

	printf("\ninorder is \n");
	inorder(root);

	printf("\ndeleting......40\n");
	root=deletenode(root,40);
	inorder(root);
	
	printf("\ndeleting......50\n");
	root=deletenode(root,50);
	inorder(root);
}