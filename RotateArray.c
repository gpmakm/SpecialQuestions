#include<stdio.h>

void main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int d=2;
    for(int i=sizeof(arr)/sizeof(int);i<0;i++){
        arr[i]=arr[i-1];
        arr[0]=arr[sizeof(arr)/sizeof(int)-1];
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf(" %d |",arr[i]);
    }
    
}
