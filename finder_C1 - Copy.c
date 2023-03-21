#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct tree{
    int data;
    struct tree *left,*right,*random;
};
struct tree *base(int value){
    struct tree *nn;
    nn=malloc(sizeof(struct tree));
    nn->data=value;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}
struct tree *create(struct tree* root,int value){
    if(root==NULL){
        return base(value);
    }
    if(root->data>value){
        root->left=create(root->left,value);
    }
    if(root->data<value){
        root->right=create(root->right,value);
    }
    return root;
}
int search(struct tree *root,int value){
    int count=0;
    struct tree *temp;
    temp=root;
    if(temp->data>value){
        while(temp->left!=NULL){
            if(temp->data==value){
                count=1;
            }
            temp=temp->left;
        }
    }
    if(temp->data<value){
        while(temp->right!=NULL){
            if(temp->data=value){
                count=1;
            }
            temp=temp->right;
        }
    }
    return count;
}
int find_min(struct tree *root){
    struct tree *temp;
    temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return (temp->data);
}
int find_max(struct tree *root){
    struct tree *temp;
    temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return (temp->data);
}
void traverse(struct tree *root){
    if(root==NULL){
        return;
    }
    printf("%d\t",root->data);
    traverse(root->left);
    traverse(root->right);
}
int main(){
    struct tree *root=NULL;
    int item,choice,min,max,seah;
    do{
        printf("\n1.Insert\n2.Search\n3.Find min & max\n4.display\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter the data: ");
            scanf("%d",&item);
            root=create(root,item);
            break;
            case 2:
            if(root==NULL){
                printf("\nvalues must entered\n");
            }
            printf("\nEnter data to search: ");
            scanf("%d",&item);
            seah=search(root,item);
            if(seah==1){
                printf("found: %d\n",item);
            }
            else{
                printf("\nnot found: %d\n",item);
            }
            break;
            case 3:
            if(root==NULL){
                printf("\nvalues must entered\n");
            }
            min=find_min(root);
            printf("\nmin value: %d",min);
            max=find_max(root);
            printf("\nmax value: %d\n",max);
            break;
            case 4:
            printf("\nThe entered values are: \n");
            traverse(root);
            break;
            case 5:
            printf("Exit Successful\n");
            return 0;
            break;
            default:
            printf("\nAccess Denied\n");
            break;
        }
    }while(1);
    getch();
}