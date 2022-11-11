#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp,*node1,*node2,*prev,*curr,*last;
void display(struct node *head){
	temp = head;
	int j=0;
	while(temp!=NULL)
	{
		printf("node %d is %d\n",j+1,temp->data);
		temp=temp->next;
		j++;
	}
}
void insertnodes(int n){
	int i=1;

		if(head==NULL){
			node1=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&node1->data);
			node1->next = NULL;
			head=node1;
		}
		
		while(i<n){
			node2=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&node2->data);
			node2->next = NULL;
			temp=head;
		
		while(temp->next!=NULL){
				temp=temp->next;
			}
		temp->next=node2;
		i++;
		}
}
struct node * reverse(struct node *head){
	prev=NULL;
	curr=head;

	while(curr!=NULL){
		last = curr->next;
		curr->next = prev;

		prev = curr;
		curr=last;
	}
	return prev;
}
void main()
{	
	int n;
	printf("enter no of node ");
	scanf("%d",&n);
	insertnodes(n);
	display(head);
	struct node *newhead = reverse(head);

	display(newhead);   		
}