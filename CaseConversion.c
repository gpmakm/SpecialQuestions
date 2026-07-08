#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char entry[25];
    printf("Enter your string:-");
    scanf("%s",entry);
    int i;
    for ( i = 0; entry[i]!=NULL; i++)
    {
        /* code */
        if (entry[i]>=65 && entry[i]<=90)
        {
            /* code */ entry[i]=entry[i]+32; //Converting to lowercase
        }
        else
        {
            /* code */entry[i]=entry[i]-32; //converting to uppercase
        }
        
    }
    printf("The string is %s",entry);
    

    return 0;
}
