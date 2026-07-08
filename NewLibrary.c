#include<stdio.h>


int main(){
	int m;
char bookinfo[50],n;
	FILE *book=fopen("3rd_Sem_CSE.txt","r");
	n=fgets(bookinfo,50,book);
		printf("%s",bookinfo);


	for(m=0;m<=3;m++)
	{
		n=fgets(bookinfo,50,book);
		printf("%s",bookinfo);
		n++;
	}
return 0;}


