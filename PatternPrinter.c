#include <stdio.h>
void normalPattern(){
 int count=5;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
}

void reversePattern(){
    
    int count = 5;
    for (int i = count; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    normalPattern();
    printf("---------------------\n");
    reversePattern();
   
    
    return 0;
}