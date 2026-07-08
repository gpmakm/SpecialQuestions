#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void LinkedListTrav(struct Node *ptr)
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
	struct Node *fifth;
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	
	//DAta Enteries
	head->data=88;
	head->next=second;

 	second->data=85;
 	second->next=third;
 	
 	third->data=85;
 	third->next=fourth;
 	
 	fourth->data=84;
 	fourth->next=fifth;
 	
 	fifth->data=71;
 	fifth->next=NULL;
 	
 	LinkedListTrav(fifth);

return 0;}

