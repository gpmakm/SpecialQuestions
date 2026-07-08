#include<stdio.h>
int main(){

	int c=0,a,m,n,arr[a],u;
	printf("Enter the size:-");
	scanf("%d",&a);
	
	for(u=0;u<=a;u++)
	{
		printf("Enter the singer code:-");
		scanf("%d",&arr[u]);
	}
	
	for(m=0;m<=a;m++)
	{
		for(n=0;n<=a;n++)
		{
			if(arr[m]==arr[n])
			{
				c+=1;
			}
			printf("%d %d",arr[m],arr[n]);
		}
		printf("\n");
	}
	printf("%d",c);

return 0;}

