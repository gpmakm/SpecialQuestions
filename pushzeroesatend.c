#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int arr[]={1,2,3,4,5,4,0,6,0};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
        if(arr[i]==0){
            
            swap(&arr[i+1],&arr[i]);
        }
    }
    printf("\nSize of array initially: %d \n",sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
    printf("\nSize of array after: %d ",sizeof(arr)/sizeof(int));
   
}