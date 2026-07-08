#include<stdio.h>
int main(){
	int a,b,sum=0;
	char opr;
 
	printf("Enter the first operand:");
	scanf("%d",&a);
	
	printf("Enter the second operand:");
	scanf("%d",&b);
	
	printf("Enter the operator:");
	scanf("%c",&opr);
	
	if(opr=="+")
	
	{
		sum=a+b;
		printf("sum of the numbers is %d",sum);
	}
	
	else if(opr=="-")
	{
		sum=a-b;
		printf("sum of the numbers is %d",sum);
	}
	else if(opr=="*")
	{
		sum=a*b;
		printf("sum of the numbers is %d",sum);
	}
	else if(opr=="/")
	{
		sum=a/b;
		printf("sum of the numbers is %d",sum);
	}
	else
	{
		printf("Operation not found");
	}
	return 0;
}
