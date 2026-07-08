#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char sentence[15];
    printf("Enter the word to get length:-");
    scanf("%s",&sentence);
    int count=0;

for (int i = 0; sentence[i]!=NULL; i++)
{
    /* code */
    count+=1;

}
printf("%d",count);

    

    return 0;
}
