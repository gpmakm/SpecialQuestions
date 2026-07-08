#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    int sum=0;
   if (n==0){
       sum=0;
   } else{
        sum=n*(n+1)/2;
        printf("%d",sum);
   }

    return 0;
}