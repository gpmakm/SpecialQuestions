#include<stdio.h>
int main(){
    char s[16]="Aka.rsh.Mis.hRa";
    for(int i=sizeof(s)/sizeof(char)-1;i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}