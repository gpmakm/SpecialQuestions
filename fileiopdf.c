#include<stdio.h>
void main(){
    FILE *fptr=fopen("F:\\Documents\\DBMS-1.pdf","r");
    fptr->_base=15;
    //char m=fgetc(fptr);
    while (fptr!=NULL)
    {
        printf("%d",fptr);
    }
    
}