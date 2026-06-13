#include<stdio.h>
#include<stdlib.h>
struct bintree
{
    int val;
    struct bintree *left;
    struct bintree *right;
};
struct bintree *createBinaryTree(int num){
    struct bintree *t1;
    t1=(struct bintree*)malloc(sizeof(struct bintree));
    if (t1==NULL)
    {
        printf("Memory not allocated!!\n");
    }
    
    t1->val=num;
    t1->left=NULL;
    t1->right=NULL;
    printf("%p",(void *)t1);
    return t1;
   
}

void printTree(struct bintree *t){
    
  if(t==NULL)
    return;

 printf(" %d ",t->val);
 printTree(t->left);
 printTree(t->right);
    
    
}

int main(){
    struct bintree *tx,*txr,*txl;
    tx=createBinaryTree(15);
    printf("Created roott!!\n");
    tx->left=createBinaryTree(5);
    printf("Added element!!\n");
    tx->right=createBinaryTree(3);
    printf("Added element!!\n");
    printTree(tx);
    printf("%d ",tx->val);
    return 0;
}