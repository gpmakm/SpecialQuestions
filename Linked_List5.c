#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
int main(){
	//name declaration for every nodes and their pointers
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *NewNode;
	//memory allocation for every pointers
	head=(struct node *)malloc(sizeof(struct node ));
	second=(struct node *)malloc(sizeof(struct node ));
	third=(struct node *)malloc(sizeof(struct node ));
	fourth=(struct node *)malloc(sizeof(struct node ));
	NewNode=(struct node *)malloc(sizeof(struct node ));
	
	//data entry for every node elements
	head->data=45;
	head->next=second;
	
	second->data=54;
	//second->next=third;
	
	second->next=NewNode;
	NewNode->data=47;
	NewNode->next=fourth;
	
	//third->data=100;
	//third->next=fourth;
	
	fourth->data=90;
	fourth->next=NULL;
	
	printf("Data %d was present at %d\n",head->data,&head->data);
	printf("Data %d was present at %d\n",second->data,&second->data);
	printf("Data %d was present at %d\n",NewNode->data,&NewNode->data);
	printf("Data %d was present at %d\n",fourth->data,&fourth->data);;
	
return 0;}

