#include<stdio.h>
int main(){
	FILE *ptr=fopen("array_1.c","r");

	char m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	m=fgetc(ptr);
	printf("The read character was %c\n",m);
	 m=fgetc(ptr);
	printf("The read character was %c\n",m);

	fclose(ptr);
	return 0;}

