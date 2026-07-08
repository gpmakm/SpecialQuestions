#include<stdio.h>
int main(){
	int i;
	FILE *file=fopen("array_1.c","r");
	char page[55];
	char p=fgets(page,54,file);
	
	
	printf("%s",p);
	
	for(i=0;i<=18;i++)
	{
		p=fgets(page,54,file);
		printf("%s",p);
		p++;
	}
return 0;}

