//expression tree datastructure
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct tree{
    char data;
    struct tree *next,*left,*right;
}tree;
struct tree *root=NULL;
struct tree* newnode(char data){
    struct tree *node=(struct tree *)malloc(sizeof(struct tree));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    node->next=NULL;
    return(root);
}
void inorder(struct tree * node){    
    if(root==NULL){
        return;
    }
    else{
        inorder(node->left);
        printf("%c",node->data);
        inorder(node->right);
    }
}
void push(struct tree* x){
    if(root==NULL){
        root=x;
    }
    else{
        (x)->next=root;
        root=x;
    }
}
void pop(){
    struct tree* temp=root;
    root=root->next;
    return temp;
}
int main(){
    struct tree *x,*y;
    char s[]={'A','B','C','*','+','D','/'};
    int len=sizeof(s)/sizeof(s[0]) ;
    for(int i=0;i<len;++i){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
			z=newnode(s[i]);
			x=pop();
			y=pop();
			z->left=y;
			z->right=x;
			push(z);
		}
		else {
			z = newnode(s[i]);
			push(z);
		}
	}
	printf(" The Inorder Traversal of Expression Tree: ");
	inorder(z);
	return 0;
}