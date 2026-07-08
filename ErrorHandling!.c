#include <stdio.h>

int main() {
    int N = 5;

    for (int i = 0; i < N; i++)   
    {
        for (int j = 0; j <= i; j++) 
            printf("*");

        printf("\n");
    }

    return 0;
}


// expected output 
// N=5
// *
// **
// ***
// ****
// *****