#include<stdio.h>
int main(){
	FILE *ptr=fopen("Loop_1.c","r");
	char str[55];
	char m=fgets(str,54,ptr);
	printf("%s",m);
return 0;}

