#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *left,*right;
}node;
struct node *root,*nn,*temp;
int main(){
    int item,n;
    printf("\nEnter the no.of input values: ");
    scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->left;nn->right;root=nn;temp=nn;
    printf("\nEnter the right squed data: \n");
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            root->data=item;
            root->right=temp;
        }
        if(i==1){
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->right=NULL;
            nn->left=NULL;
        }
    }
}