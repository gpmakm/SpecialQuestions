#include<stdio.h>
#include<stdlib.h>
struct Node{
	int marks;
	struct Node *next;
};

void LinkedListTraverrsal(struct Node *pointer)
{
	while(pointer!=NULL){
	printf("Element was %d  at \t %d\n",pointer->marks,&pointer->marks);
	pointer=pointer->next;
	}
}
int main(){
	
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	head->marks=56;
	head->next=third;
	
	third->marks=87;
	third->next=second;

	second->marks=97;
	second->next=NULL;
	
	LinkedListTraverrsal(head);
	
	
return 0;}

