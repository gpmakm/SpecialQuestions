#include<stdio.h>
int main()
{
	int num ,q,count,i;
	printf("Enter a number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
		q=num%i;
		if(q==0)
		{
			count++;
		}
}
printf("%d\n",count);

	
	
return 0;}
