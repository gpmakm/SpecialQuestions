#include<stdio.h>
void main(){
    char s[100]="pallavi";
    int flag=0;
    for (int i = 0; i < sizeof(s)/sizeof(char); i++)
    {
        for (int j = i; j < sizeof(s)/sizeof(char); j++)
        {
            if(s[i]==s[j]){
                flag++;
            }
        }
        if (flag>1)
        {
            flag=0;
        } else{
            printf("%c",s[i]);
        }
        
        
    }
    
}