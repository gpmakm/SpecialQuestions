#include<stdio.h>
#include<string.h>
struct student_info{
	int roll_number;
	char name[15];
}s1;
struct teacher_info{
	int reg_number;
	char name;
}t1;

int main(){

	struct student_info;
	s1.roll_number=42;
	strcpy(s1.name,"Akarsh");
	
		struct teacher_info;
	t1.reg_number=112211047;
    

	printf("Name of the student is %s\n",s1.name);
	printf("Roll number of the student is %d",s1.roll_number);
	return 0;
	}
	
