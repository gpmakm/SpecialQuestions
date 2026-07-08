#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    char c;
    double d;
    float f;
    printf("Size of int is %d bytes \n Size of char is %d bytes\n Size of double is %dbytes \n Size of float is %d bytes",sizeof(i),sizeof(c),sizeof(d),sizeof(f));

    return 0;
}