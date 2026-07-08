#include<stdio.h>

void Info();
void main(){
Info();
}
void Info(){
	int roll;
	printf("Enter your roll number and get your data:");
	scanf("%d",&roll);
	
	if(roll==01){
		printf("Manish kumar\nCSE\n");
	}
	else{
		printf("Data not matched");
	}
}
