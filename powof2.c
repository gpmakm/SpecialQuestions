#include<stdio.h>
short int powof2(int n){
    return (n>0 &&(n&(n-1))==0);
}
void main(){
    printf("%d", powof2(18));
}