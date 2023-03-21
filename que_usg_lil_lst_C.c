#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
void enqueue(void);
void dequeue(void);
void peak(void);
void display(void);
struct nodes{
    int data;
    struct nodes *next;
};
struct nodes *front=0;
struct nodes *rear=0;
int main(){
    int option;
    printf("\n1.push\n2.pop\n3.peak_value\n4.display\n5.exit");
    printf("\nEnter your option: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        peak();
        break;
        case 4:
        display();
        break;
        case 5:
        printf("\nExIt SuCcEsSfUlL...");
        break;
        default:
        printf("\nPlease enter in the given options to view...");
        break;
    }while(option<5);
    getch();
}
void enqueue(){
    struct nodes *newnode;
    newnode=(struct nodes *)malloc(sizeof(struct nodes));
    int x;
    printf("\nEnter the number to push: ");
    scanf("%d",&x);
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else{
        rear->data=x;
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    struct nodes *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("\nThe queue is empty couldn't able to pop the elements...");
    }
    else{
        printf("\nThe deleted element is: %d",front->data);
        front=front->next;
        free(temp);
    }
}
void display(){
    struct nodes *temp;
    if(front==0 && rear==0){
        printf("\nThe queue is empty...");
    }
    else{
        temp=front;
        while(temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void peak(){
    if(front==0 && rear==0){
        printf("\n The queue is empty...");
    }
    else{
        printf("%d",front->data);
    }
}