#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[]={1,2,3,4,-5,4,-9,6,-10};
    // for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    //     printf("%d ",arr[i]);
    //     if((arr[i]<0 && arr[i+1]>=0)){
            
    //         swap(&arr[i+1],&arr[i]);
    //     }
    // }
    // printf("\nSize of array initially: %d \n",sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
    //printf("\nSize of array after: %d ",sizeof(arr)/sizeof(int));
    printf("\n");
    int i=0,j=sizeof(arr)/sizeof(int)-1;
    while(i<j){
        if(arr[i]<0 && !(arr[j]<0)){
            swap(&arr[i],&arr[j]);
           
            j--;
        }
        i++;
         if(arr[j]<0){
                j--;
            }
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
   
     return 0;
}