#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[32];
	
}s1;
int main(){
	Structure student =s1;
	s1.roll=01;
	strcpy(s1.name,"Manish Kumar");
//	strcpy(s1.branch,"CSE");
	printf("Roll is %d",s1.roll);
	printf("Name is %s",s1.name);
	return 0;
	
}




