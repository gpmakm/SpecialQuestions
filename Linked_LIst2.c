#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void ListTraversal(struct Node *ptr)
{
	while(ptr!=0)
	{
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
	struct Node *sixth;
	struct Node *seventh;
	struct Node *eighth;
	struct Node *nineth;
	
//Allocating memory for for nodes dynamically
head=(struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node *)malloc(sizeof(struct Node));
fourth=(struct Node *)malloc(sizeof(struct Node));
fifth=(struct Node*)malloc(sizeof(struct Node));
sixth=(struct Node *)malloc(sizeof(struct Node));
seventh=(struct Node *)malloc(sizeof(struct Node));
eighth=(struct Node *)malloc(sizeof(struct Node));
nineth=(struct Node *)malloc(sizeof(struct Node));

//Filling data for the first node
head->data=88;
head->next=second;

//Filling data for the second node
second->data=45;
second->next=third;

//Filling data for the third node
third->data=67;
third->next=fourth;

//Filling data for the fourth node
fourth->data=27;
fourth->next=fifth;

//Filling data for the fifth node
fifth->data=7;
fifth->next=sixth;

//Filling data for the sixth node
sixth->data=14;
sixth->next=seventh;

//Filling data for the seventh node
seventh->data=44;
seventh->next=eighth;

//Fiiling data for the eighth node
eighth->data=402;
eighth->next=NULL;

ListTraversal(head);
int count=-1;

	struct Node *one=head;
	struct Node *two=head;
	while(two!=NULL){
		count++;
		//two=two->next;
		if(count>4){
			printf("! : %d\n",two->data);
			one=one->next;
			printf("2 : %d\n",one->data);
		}
		two=two->next;
	}
	printf("The %dth from last element is %d",count,one->data);
//Filling data for the nineth element


return 0;}

