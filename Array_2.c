#include<stdio.h>
void main()
{
	int array[12],i,se=0,so=0;
	printf("Enter 20 numbers:\n");
	for(i=0;i<11;i++)
	{
		scanf("%d\n",&array[i]);
		if(array[i]%2==0)
		{
			se=se+array[i];
		}
		else if(array[i]%2!=0){
			so=so+array[i];
		}
	}
	array[11]=so;
	array[12]=se;
	for(i=0;i<13;i++)
	{
		printf("%d\n",array[i]);
	}
}
