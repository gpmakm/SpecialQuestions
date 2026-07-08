#include<stdio.h>
struct Batch{
	char names[5][20];
	char city[5][10],branch[5][20];
	int rollCode;
};
int main(){

	printf("Welcome to list of toppers from each batch\n");
	struct Batch b1;
	b1.names={"Keshav Chandra","Komal","Aditi","Rupak Kumar","Sudhakar Tiwari"};
	b1.city={"Bhagalpur","Gaya","Muzaffarpur","Muzaffarpur","Hazipur"};
	b1.branch={"Electrical Engg.","Computer Science Enggg."
	"Computer Science Engg.""Computer Science Engg.","Mechanical Engg."};
	
	




return 0;}

