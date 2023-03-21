//array opertions with functions
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void todisplay();
void topush();
void topop();
void isempty();
void isfull();
#define zcx 10
struct stack{
    int top;
    int arr[zcx];
}nd;
int main(){
    int ans;
    nd.top=-1;
    int option, item;
    do{
    printf("\nChoose the option...");
    printf("\n1.push \n2.pop \n3.display \n4.exit");
    printf("\nEnter the option: ");
    scanf("%d",&option);
        switch(option){

            case 1:
            printf("\nEnter the value to push: ");
            scanf("%d",&item);
            if(nd.top==zcx-1){
                printf("\n The stack is full...");
            }
            else{
                nd.top++;
                nd.arr[nd.top]=item;
            }
            break;

            case 2:
            if(nd.top==-1){
                printf("\nThe stack is empty...");
            }
            else{
                int item;
                item=nd.arr[nd.top];
                nd.top--;
                printf("Deleted value is: %d",item);
            }
            break;

            case 3:
                int i;
                if(nd.top==-1){
                printf("\nThe stack is empty...");
                }
                else{
                    for(int i=nd.top;i>=0;i--){
                    printf("%d\t",nd.arr[i]);
                    }
                }
            break;

            case 4:
            printf("\nEXIT Successfull...");
            break;

            default:
            printf("Please enter in the range...");
        }
    }while(option<4);
    getch();
}