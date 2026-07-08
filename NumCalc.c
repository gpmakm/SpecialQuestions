#include<stdio.h>
int main(int argc, char const *argv[])
{
    int product=1,count=5;
    int arr[]={2,4,5,6,3};
    for (int i = 0; i < count; i++)
    {
       product*=arr[i];
    }
    
   
   printf("s=%d\n",product);
    return 0;
}
