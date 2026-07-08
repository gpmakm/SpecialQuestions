#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void LLTraversal(struct Node *ptr)
{
	while(ptr!=NULL){

	printf("Element is %d\n",ptr->data);
	ptr=ptr->next;
		}
}
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
//Memeory allocation for nodes
head=(struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node *)malloc(sizeof(struct Node));
fourth=(struct Node *)malloc(sizeof(struct Node));

//Inserting data and node for head
head->data=5;
head->next=second;

//Inserting data and node for second
second->data=68;
second->next=third;


//Inserting data and ode for thrid
third->data=44;
third->next=fourth;

fourth->data=64;
fourth->next=NULL;



LLTraversal(second);






return 0;}


