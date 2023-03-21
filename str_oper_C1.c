#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list{
    char id1,id2;
    int unit,quan,total;
    struct list *prev,*nxt;
}list;
struct list *head,*tail,*ptr1,*ptr2,*nn;
int main(){
    int n,data,piece,quan,tot;
    printf("\nENter total inputs: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->id1;nn->id2;nn->quan;nn->total;nn->unit;
    head=nn;tail=nn;
    for(int i=0;i<n;++i){
        printf("\n\nEnter the product %d details:",i+1);
        int name2,id2;
        printf("\nProduct id1?: ");
        scanf("%s",&name2);
        printf("\nproduct id2?: ");
        scanf("%s",&id2);
        printf("\n1 piece value?: ");
        scanf("%d",&piece);
        printf("\nTotal quantity?: ");
        scanf("%d",&quan);
        tot=piece*quan;
        if(i==0){
            head->prev=NULL;
            head->id1=name2;
            head->id2=id2;
            head->unit=piece;
            head->quan=quan;
            head->total=tot;
            head->nxt=NULL;
        }
        if(i==1){
            tail->prev=head;
            tail->id1=name2;
            tail->id2=id2;
            tail->unit=piece;
            tail->quan=quan;
            tail->total=tot;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->id1=name2;
            nn->id2=id2;
            nn->unit=piece;
            nn->quan=quan;
            nn->total=tot;
            nn->prev=tail;
            tail->nxt=nn;
            tail=nn;
        }
    }
    int count=0;
    printf("\nDisplating the user inputed values:");
    ptr1=head;
    while(ptr1!=NULL){
        printf("\nName: %d",ptr1->id1);
        printf("\nId: %d",ptr1->id2);
        printf("\nPiece value: %d",ptr1->unit);
        printf("\nQuantity: %d",ptr1->quan);
        printf("\nTotal spend for this product: %d",ptr1->total);
        printf("\n\n");
        ptr1=ptr1->nxt;
    }
    printf("\nPiece values more than 500: ");
    ptr1=head;
    while(ptr1!=NULL){
        if(ptr1->unit>=500){
            count++;
            printf("\nName: %d",ptr1->id1);
            printf("\nId: %d",ptr1->id2);
            printf("\nPiece: %d",ptr1->unit);
            printf("\nQuantity: %d",ptr1->quan);
            printf("\nTotal spend: %d",ptr1->total);
            printf("\n\n");
        }
        ptr1=ptr1->nxt;
    }
    if(count==0){
        printf("No values found\n");
    }
}