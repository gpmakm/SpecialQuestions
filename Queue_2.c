#include<stdio.h>
#include<stdlib.h>
struct Queue{
	int front;
	int rear;
	int *arr;
	int size;
};
void enqueue(struct Queue *q,int val){
	if(q->rear==q->rear+1)
	{
		printf("Queue Overflow\n");
	}
	else{
		q->rear=q->rear+1;
		q->arr[q->rear]=val;
		printf("Element added successfully\n%d",val);
	}
	
}
int main(){
	struct Queue q;
	q.size=3;
	q.front=-1;
	q.rear=-1;
	q.arr=(int *)malloc(q.size*(sizeof(int)));
	enqueue(&q,89);

return 0;}

