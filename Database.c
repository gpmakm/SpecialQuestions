#include<stdio.h>
struct address{
	int house_number;
	char city[20];
	int PIN; 
};
struct student{
	char Name1,Name2,Name3,Name4, Name5,Name6,Name7,Name8;
	struct address add;
};
int main(){
	struct student std;
	printf("Enter student info:-\n");
	scanf("%s%d%s%d,Name1,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name2,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name3,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name4,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name5,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name6,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name7,&std.add.house_number,std.add.city,&std.add.PIN");
	scanf("%s%d%s%d,Name8,&std.add.house_number,std.add.city,&std.add.PIN");
printf("\n Printing students info...........\n");
printf("Name1:%s\nHouse_number:%d\nCity:%s\nPIN:%d,std.name,std.add house_number,std.add.city,std.add.PIN");	
	
};
