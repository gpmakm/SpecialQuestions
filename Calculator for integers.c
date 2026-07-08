#include<stdio.h>
int main(){
	int a,b;
	printf("Enter your number-");
	scanf("%d",&a);
	printf("Enter the second number-");
	scanf("%d",&b);
	printf("The sum of the numbers is:%d+%d=%d\n",a,b,a+b);
	printf("The difference of the numbers is:%d-%d=%d\n",a,b,a-b);
	printf("The product of the numbers is:%d*%d=%d\n",a,b,a*b);
	printf("The quotient of the numbers is:%d/%d=%d\n",a,b,a/b);
	return 0;
}
