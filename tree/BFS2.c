#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// void Create_edge(int,int);
// void init();
// void showGraph();
// int BFS(int,int);
// int v,e,s,d;
// void main(){

// 	init();
// 	// Create_edge(1,4);
// 	// Create_edge(1,5);
// 	// Create_edge(2,4);
// 	// Create_edge(2,5);
// 	// Create_edge(3,5);
// 	// Create_edge(4,2);
// 	// Create_edge(4,5);
// 	// Create_edge(5,3);
// 	// Create_edge(5,2);
// 	// Create_edge(5,1);
// 	// Create_edge(5,4);
// 	//showGraph();


// 	printf("enter no. of vertices and edges :\n");
// 	scanf("%d%d",&v,&e);

// 	printf("enter %d edges :\nSource Destination", e);
// 	for(int i=0;i<e;i++){
// 		scanf("%d%d",&s,&d);
// 		Create_edge(s,d);
// 	}

// 	showGraph();
	
// }

struct node
{
int data;
struct node *next;
};

// struct node *adjList[6];
// void init(){
// 	int i;
// 	for(i=1;i<=5;i++){
// 		adjList[i]=NULL;
// 	}
// }

// void Create_edge(int i,int n){
// 	struct node *edge = malloc(sizeof(struct node));
// 	edge->data=n;
// 	edge->next = NULL;

// 	if(adjList[i]==NULL)
// 		adjList[i]=edge;
// 	else{
// 		struct node *temp = adjList[i];
// 		while(temp->next){
// 			temp=temp->next;
// 		}
// 		temp->next = edge;
// 	}
// }



// void showGraph(){
// 	int i;
// 	for(i=0;i<=5;i++){
// 		struct node *temp = adjList[i];
// 		printf("adjList[%d]-->",i);
// 		while(temp){
// 			printf("%d-->",temp->data);
// 			temp=temp->next;
// 		}
// 		printf("Null\n");
// 	}
// }






// void main(){

// 	init();
// 	// Create_edge(1,4);
// 	// Create_edge(1,5);
// 	// Create_edge(2,4);
// 	// Create_edge(2,5);
// 	// Create_edge(3,5);
// 	// Create_edge(4,2);
// 	// Create_edge(4,5);
// 	// Create_edge(5,3);
// 	// Create_edge(5,2);
// 	// Create_edge(5,1);
// 	// Create_edge(5,4);
// 	//showGraph();


// 	printf("enter no. of vertices and edges :\n");
// 	int v,e,s,d;
// 	scanf("%d%d",&v,&e);

// 	printf("enter %d edges :\nSource Destination", e);
// 	for(int i=0;i<e;i++){
// 		scanf("%d%d",&s,&d);
// 		Create_edge(s,d);
// 	}

// }



struct node *head=NULL,*temp,*node1,*node2,*node3;
void main()
{	
	int n;
	printf("enter no of node");
	scanf("%d",&n);
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
   		










	// head=node1;


	// node2=(struct node *)malloc(sizeof(struct node));
	// scanf("%d",&node2->data);
	// node2->next = NULL;

	// node1->next = node2;

	// node2=(struct node *)malloc(sizeof(struct node));
	// scanf("%d",&node2->data);
	// node2->next = NULL;
	// temp2=head;
	// if()

	// node2->next = node3;

	//print ll
	temp = head;
	int j=0;
	while(temp!=NULL)
	{
		printf("node %d is %d\n",j+1,temp->data);
		temp=temp->next;
		j++;
	}

}