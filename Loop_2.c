#include<stdio.h>
int main(){
	int sum,prod=1,u=1;
	printf("Ente a number:");
	scanf("%d",&sum);
	while(u<=sum)
	{
		prod*=u;
		u++
	;}
	printf("Factorial is %d",prod);
return 0;}

