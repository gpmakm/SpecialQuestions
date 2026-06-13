#include<stdio.h>
#include<stdlib.h>
int m;
struct Queue{
	int size;
	int front;
	int rare;
	int *arr;
};
void Enqueue(struct Queue *q,int val){
	if(q->rare==q->size-1)//if(isFull(q))
	{
		printf("Queue overflown\n");
	}
	else{
		q->rare=q->rare+1;
		q->arr[q->rare]=val;
		printf("Enqueued elelement successfully\n");

		/*for(m=0;m<=q->front;m++)
		{*/
			printf("%d\n",q->arr[q->rare]);
	//}
	}

		

	
}
void Dequeue(struct Queue *q){
	int a=-1;
	if(q->front==q->rare){
		printf("No elements to dequeue\n");
	}
	else{
		q->front++;
		a=q->arr[q->front];
		printf("Element dequeued\n");
		printf("%d\n",q->arr[q->rare]);
	}
}

int main(){
	struct Queue q;
	q.size=10;
	q.front=-1;
	q.rare=-1;
	q.arr=(int *)malloc(q.size*sizeof(int));
	Enqueue(&q,13);
	Enqueue(&q,55);
	Enqueue(&q,90);
	Dequeue(&q);
		
	
	
	
return 0;}

