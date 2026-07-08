#include<stdio.h>
#include<stdlib.h>
int i;
struct node{
	int data;
	struct node *next;
};
struct node *insertatindex(struct mode *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return data;
}

struct *insertatbet(struct node *head,int data,int index){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *p=head;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
	
}
int main(){
return 0;}

