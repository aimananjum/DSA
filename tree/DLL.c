#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
	
};
struct node *head=NULL;

void main(){
	struct node *node1,*temp,*node5;
	int n;
	printf("Enter No of Nodes :\n");
	scanf("%d",&n);

	int i=1;
	printf("Enter data of %d : ",i );
	node1=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&node1->data);
	node1->next=NULL;
	node1->prev=NULL;
	i++;
	head=node1;

	while(n-1){

		node5=(struct node*)malloc(sizeof(struct node));
		printf("Enter data of %d : ",i);
		scanf("%d",&node5->data);
		node5->next=NULL;
		node5->prev=NULL;

		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node5;
		node5->prev=temp;

		n--;
		i++;
	}


	temp = head;
	int j=0;
	while(temp!=NULL)
	{
		printf("node %d is %d\n",j+1,temp->data);
		temp=temp->next;
		j++;
	}


}