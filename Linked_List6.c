#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *fwd;
	struct node *bwd;
};
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	
	head->data=85;
	head->bwd=NULL;
	head->fwd=second;
	
	second->data=86;
	second->bwd=head;
	second->fwd=third;
	
	third->data=71;
	third->bwd=second;
	third->fwd=fourth;
	
	fourth->data=88;
	fourth->bwd=third;
	fourth->fwd=NULL;
	
	int count=-1;

	struct node *one=head;
	struct node *two=head;
	while(two!=NULL){
		count++;
		//two=two->fwd;
		if(count>4){
			printf("! : %d\n",two->data);
			one=one->fwd;
			printf("2 : %d\n",one->data);
		}
		two=two->fwd;
	}
	printf("The %dth from last element is %d",count,one->data);
return 0;}

