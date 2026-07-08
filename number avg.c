#include<stdio.h>
int main(){
	int a,b,c,average;
	printf("Enter the first number:-\n");
	scanf("%d",&a);
	printf("Enter second number:-\n");
	scanf("%d",&b);
	printf("Ente third number:-\n");
	scanf("%d",&c);
	average=(a+b+c)/3;
	printf("Average of the numbers is %d ",average);
	return 0;
}
