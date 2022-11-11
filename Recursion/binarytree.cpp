#include <iostream>
#include<queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int val){
		data= val;
		left=NULL;
		right=NULL;
	}

};

void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<"->";
	inorder(root->right);
}

void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<"->";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"->";
}

int search(int inO[],int start,int end,int curr){
	for(int i=start;i<=end;i++){
		if(inO[i]==curr){
			return i;
		}
	}
	return -1;
}

node* buildTree(int preO[],int inO[],int start,int end){
	static int idx=0;

	if(start>end){
		return NULL;
	}

	int curr=preO[idx];
	idx++;
	node* root=new node(curr);
	
	if(start==end){
		return root;
	}

	int pos=search(inO,start,end,curr);
	root->left=buildTree(preO,inO,start,pos-1);
	root->right=buildTree(preO,inO,pos+1,end);
}
// void levelOrder(node* root){
// 	if(root==NULL){
// 		return;
// 	}
// 	queue<node*> q;
// 	q.push(root);
// 	cout<<"first level ";
// 	q.push(NULL);
	
// 	while(!q.empty()){
// 		node* Node = q.front();
// 		q.pop();
// 		if(Node!=NULL){
// 			cout<<Node->data<<" ";
// 			if(Node->left){
// 				q.push(Node->left);
// 			}
// 			if(Node->right){
// 				q.push(Node->right);
// 			}
// 		}
// 		else if(!q.empty()){
// 			cout<<"\nNext Level ";
// 			q.push(NULL);
// 		} 
// 	}
// }

void levelOrder(node* root){
	if(root==NULL){
		return;
	}
	queue<node*> a;

	a.push(root);
	cout<<"first level ";
	a.push(NULL);
int sum=0;
	while(!a.empty()){
		node* n1 = a.front();
		a.pop();
		if(n1!=NULL){
			cout<<n1->data<<" ";
			sum=sum+n1->data;
			if(n1->left)
				a.push(n1->left);
			if(n1->right)
				a.push(n1->right);

		}

		else if(!a.empty()){
			cout<<sum<<" ";
			cout<<"\nNext Level ";
			a.push(NULL);
			sum=0;
		}

	}
	cout<<sum;
}

int main(){
	node* root= new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	cout<<endl;
	inorder(root);
cout<<endl;
	levelOrder(root);
	cout<<endl;

	// int inO[]={1,2,4,3,5};
	// int preO[]={4,2,1,5,3};
	// //buit tree

	// node* root=buildTree(preO,inO,0,4);
	// inorder(root);cout<<endl;
	// preorder(root);cout<<endl;
	// postorder(root);

	return 0;
}