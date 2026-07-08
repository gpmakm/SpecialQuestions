#include<stdio.h>
int main(){
	int i,n;
	float sum=0;
	printf("Enter value ofn:-");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("%f",sum);
return 0;}

