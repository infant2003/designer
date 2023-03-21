#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
struct node *head1,*tail1,*nn1,*temp1;
struct node *head2,*tail2,*nn2,*temp2;
struct node *head3,*tail3,*nn3,*temp3;
int main(){
    int stu,sub,reg,marks;
    printf("\nEnter the no.of students to perform: ");
    scanf("%d",&stu);
    printf("\nEnter the total subjects: ");
    scanf("%d",&sub);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;head=nn;tail=nn;//for register no
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;//for mark
    for(int i=1;i<=stu;++i){
        printf("\nEnter the -->student%d reg no: ",i);
        scanf("%d",&reg);
        nn=(struct node *)malloc(sizeof(struct node));
        if(i==1){
            head->data=reg;
            head->next=tail;
        }
        if(i==2){
            tail->data=reg;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=reg;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
        printf("\nEnter the student%d -->marks: ",i);
        for(int j=0;j<sub;++j){
            scanf("%d",&marks);
            if(i==1&&j==0){
                head1->data=marks;
                head1->next=tail1;
            }
            if(i==1&&j==1){
                tail1->data=marks;
                tail1->next=NULL;
            }
            else{
                nn1=(struct node *)malloc(sizeof(struct node));
                nn1->data=marks;
                nn1->next=NULL;
                tail1->next=nn1;
                tail1=nn1;
            }
        }
    }
    temp=head;
    printf("\nEntered student list: \n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\nStudent score list: \n");
    temp=head;
    temp1=head1;
    while(temp1!=NULL&&temp!=NULL){
        printf("\nStudent%d:\t\n",temp->data);
        printf("\nScored Marks: \n");
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    nn2=(struct node *)malloc(sizeof(struct node));//for average
    nn2->data;nn2->next;head2=nn2;tail2=nn2;
    nn3=(struct node *)malloc(sizeof(struct node));
    nn3->data;nn3->next;head3=nn3;tail3=nn3;
    float sum=0;
    temp1=head1;
    while(temp1!=NULL){
        sum=sum+temp1->data;
        temp1=temp1->next;
        sum=sum+temp1->data;
        temp1=temp1->next;
        sum=sum+temp1->data;
        temp1=temp1->next;
        nn3=(struct node *)malloc(sizeof(struct node));
        nn3->data=sum;
        nn3->next=NULL;
        tail3->next=nn3;
        tail3=nn3;
        sum=sum/3;
        nn2=(struct node *)malloc(sizeof(struct node));
        nn2->data=sum;
        nn2->next=NULL;
        tail2->next=nn2;
        tail2=nn2;
        sum=0;
    }
    printf("\nTotal sum value: \n");
    head3=head3->next;
    temp3=head3;
    while(temp3!=NULL){
        printf("%d\t",temp3->data);
        temp3=temp3->next;
    }
    printf("\n");
    printf("\nPrinting the average list: \n");
    head2=head2->next;
    temp2=head2;
    while(temp2!=NULL){
        printf("%d\t",temp2->data);
        temp2=temp2->next;
    }
    printf("\n\n");
    temp=head;
    temp2=head2;
    temp3=head3;
    while(temp!=NULL&&temp2!=NULL&&temp3!=NULL){
        printf("\nStudent%d\nTotal mark: %d\nAverage: %d",temp->data,temp3->data,temp2->data);
        while(temp2->data>=91){
            printf("\nScored Grade: S");
            break;
        }
        while(temp2->data>=81){
            printf("\nScored Grade: A");
            break;
        }
        while(temp2->data>=71){
            printf("\nScored Grade: B");
            break;
        }
        while(temp2->data>=61){
            printf("\nScored Grade: C");
            break;
        }
        while(temp2->data>=51){
            printf("\nScored Grade: D");
            break;
        }
        while(temp2->data>=41){
            printf("\nScored Grade: E");
            break;
        }
        while(temp2->data<=40){
            printf("\nScored Grade: F-->Fail");
            break;
        }    
        temp=temp->next;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    getch();
}