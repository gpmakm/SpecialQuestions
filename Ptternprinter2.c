#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k, m = 10;
    for (i = 0; i <=15; i += 2)
    {
        /* code */
         for (k = 1; k <= m; k++)
            {
                /* code */
                printf("@");
            }
            m -= 1;
        for (j = 0; j <= i; j++)
        {
            /* code */
            printf("*");

            
           
        }
for (k = 1; k <= m; k++)
            {
                /* code */
                printf("@");
            }
        printf("\n");
    }

    return 0;
}
