#include<stdio.h>
int main(){
	int songs,as[songs],c=0,i;
	printf("Enter number of songs :");
	scanf("%d",&songs); //getting number of songs

	printf("Enter the song codes accessed:");
	for(i=0;i<=songs-1;i++)
	{
		scanf("%d",&as[i]);
	}
	for(i=0;i<=songs-1;i++)
	{
		if(as[i]==as[i+1])
		{
			c++;
		}
	}
	printf("%d",c);
return 0;}

