#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct tree{
    int data;
    struct tree *right,*left;
}tree;
struct tree *nn,*temp,*root;
int main(){
    int n,item;
    printf("\nEnter the no.of data's to push: ");
    scanf("%d",&n);
    nn=(struct tree *)malloc(sizeof(struct tree));
    nn->data;nn->right;nn->left;root=nn;temp=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            root->data=item;
            root->right=NULL;
            root->left=NULL;
        }
        else{
            nn=(struct tree *)malloc(sizeof(struct tree));
            nn->data=item;
            nn->right=root;
            nn->left=NULL;
            root=nn;
        }
    }
    printf("\nUser entered data's:\n");
    temp=root;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->right;
    }
    getch();
}