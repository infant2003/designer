#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *next,*random;
}list;
struct list *head,*tail,*nn,*temp;
int main(){
    int n,item;
    printf("\nEnter the no.of nodes: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->next;nn->random;head=nn;tail=nn;
    printf("\nEnter the %d node values: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
    }
}