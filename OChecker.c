#include<stdio.h>


int main(int argc, char const *argv[])
{
    
    char word[15];
    printf("Enter a word:-");
    scanf("%s",&word);
int flag=0;
    for (int i = 0; word[i]!=NULL ; i++)
    {
       // printf("%c\n",word[i]);
        /* code */
        if (word[i]=='O' || word[i]=='o')
        {
            /* code */
            flag+=1;

            
        }
        
    }
    if (flag>0)
    {
        /* code */
                     printf("Word has vowel O\n");

    }
    
    
    
    


    
    return 0;
}


