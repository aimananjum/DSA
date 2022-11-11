/********************************** BST INSERTION ****************************************************/
#include <iostream>
using namespace std;

class BST{
	int data;
	BST *left,*right;
public:
	BST();
	BST(int);
	BST* insert(BST*,int);
	void Inorder(BST *);
};

BST :: BST():data(0),left(NULL), right(NULL){}

BST :: BST(int value){
	data = value;
	left=right=NULL;
}

BST* BST :: insert(BST* root,int value){
	if(!root){
		return new BST(value);
	}
	if(value>root->data){
		root->right = insert(root->right,value);
	}
	else{
		root->left = insert(root->left,value);
	}
	return root;
}
void BST :: Inorder(BST* root){
	if(!root){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
int main(){
	BST b,*root=NULL;
	root=b.insert(root,50);
	b.insert(root,30);
	b.insert(root,20);
	b.insert(root,70);
	b.insert(root,40);
	b.insert(root,80);
	b.insert(root,60);
	b.insert(root,40);

	b.Inorder(root);
	return 0;
}