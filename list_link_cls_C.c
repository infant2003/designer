#include <stdio.h>
#include <conio.h>
#define zcx 10
int front=-1;
int rear=-1;
int queue[zcx];
void enqueue(void);
void dequeue(void);
void peak(void);
void display(void);
int main(){
    printf("\n1.push\n2.pop\n3.display\n4.peak\n5.exit");
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        int x;
        printf("Enter the value to push: ");
        scanf("%d",&x);
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        peak();
        break;
        case 5:
        printf("\nExit successfull...");
        break;
        default:
        printf("Enter the only the operation numbers 1 to 5...");
    }while(choice<5);
    getch();
}
void enqueue(){
    int a;
    if(front=zcx-1){
        printf("\nThe queue is full....");
    }
    printf("Enter the value ot push: ");
    scanf("%d",&a);
    else if(front==-1 && rear==-1){
        printf("\nThe queue is in same location, so increase the step by 1....");
        front=rear=0;
        queue[rear]=a;
    }
    else{
        rear++;
        queue[rear]=a;
        printf("\npush successfull");
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty, you can't able tothe values...");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("\nThe deleted value is: %d",queue[front]);
        front++;
        printf("\ndelete successfull");
    }
}
void peak(){
    if(front==-1 && rear==-1){
        printf("\nQueue return 1 no value in peak...");
    }
    else{
        printf("\nThe peak value in queue is:%d",queue[front]);
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("\nQueue Underflow...");
    }
    printf("\nThe final value's:");
    else{
        for(int i=front;i<rear+1;++i){
            printf("%d\t",queue[i]);
        }
    }
    else{
        printf(" ");
    }
}