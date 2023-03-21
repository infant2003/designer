#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct tree{
    int data;
    struct tree *left,*right;
};
struct tree *initial(int value){
    struct tree *nn=malloc(sizeof(struct tree));
    nn->data=value;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}
struct tree *create(struct tree *root,int value){
    if(root==NULL){
        return initial(value);
    }
    if(root->data<value){
        root->right=create(root->right,value);
    }
    if(root->data>value){
        root->left=create(root->left,value);
    }
    return root;
}
void traverse(struct tree *root){
    if(root==NULL){
        return;
    }
    traverse(root->left);
    printf("%d\t",root->data);
    traverse(root->right);
}
int main(){
    struct tree *root=NULL;
    int n,item,choice;
    do{
        printf("\n1.Insert\n2.Display\n3.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter the data: ");
            scanf("%d",&item);
            root=create(root,item);
            break;
            case 2:
            printf("\nThe data's are:\n");
            traverse(root);
            break;
            case 3:
            printf("\nExit Successful");
            return 0;
            break;
            default:
            printf("\nOption not found");
            break;
        }
    }while(1);
    getch();
}