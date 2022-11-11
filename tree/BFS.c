#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Create_edge(int,int);
void init();
void showGraph();
int BFS(int,int);
int v,e,s,d;
void main(){

	init();
	// Create_edge(1,4);
	// Create_edge(1,5);
	// Create_edge(2,4);
	// Create_edge(2,5);
	// Create_edge(3,5);
	// Create_edge(4,2);
	// Create_edge(4,5);
	// Create_edge(5,3);
	// Create_edge(5,2);
	// Create_edge(5,1);
	// Create_edge(5,4);
	//showGraph();


	printf("enter no. of vertices and edges :\n");
	scanf("%d%d",&v,&e);

	printf("enter %d edges :\nSource Destination", e);
	for(int i=0;i<e;i++){
		scanf("%d%d",&s,&d);
		Create_edge(s,d);
	}

	showGraph();
	
}

struct node
{
int data;
struct node *next;
};

struct node *adjList[6];
void init(){
	int i;
	for(i=1;i<=5;i++){
		adjList[i]=NULL;
	}
}

void Create_edge(int i,int n){
	struct node *edge = malloc(sizeof(struct node));
	edge->data=n;
	edge->next = NULL;

	if(adjList[i]==NULL)
		adjList[i]=edge;
	else{
		struct node *temp = adjList[i];
		while(temp->next){
			temp=temp->next;
		}
		temp->next = edge;
	}
}



//struct node *head,*currNode,*temp,*currNode2;

void showGraph(){
	int i;
	for(i=0;i<=5;i++){
		struct node *temp = adjList[i];
		printf("adjList[%d]-->",i);
		while(temp){
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("Null\n");
	}
}






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




// void main()
// {
// head=NULL;
// currNode=(struct node*)malloc(sizeof(struct node));
// currNode->data=10;
// currNode->next=NULL;
// head=currNode;

// currNode2=(struct node*)malloc(sizeof(struct node));
// currNode->next=currNode2;
// currNode2->data=30;
// currNode2->next=NULL;


// temp = head;
// int i=0;
// while(temp!=NULL)
// {
// printf("%d\n",temp->data);
// temp=temp->next;
// i++;
// }

// }