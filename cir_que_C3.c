//circulr queue data structure
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int arr[zcx];
int front=-1, rear=-1;
int main(){
    int option, item, i=0;
    do{
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter your option: ");
        scanf("%d",&option);
        switch(option){
            case 1:
            if(rear==zcx-1)
            printf("\nQueue overload");
            else{
                printf("\nEnter the element to push: ");
                scanf("%d",&item);
                rear=(rear+1)%zcx;
                arr[rear]=item;
                printf("\nSuccessful");
            }
            break; 

            case 2:
            if(front==rear)
            printf("\nCan't able to pop");
            else{
                front=(front+1)%zcx;
                item=arr[front];
                printf("\ndeleted item is: %d",item);
                printf("\nSuccessful");
            }
            break;

            case 3:
            if(front==rear)
            printf("\nnothing to display");
            else{
                printf("\nDisplaying the final output: ");
                while(arr[i]!='\0'){
                    printf("%d\t",arr[i]);
                    i++;
                }
            }
            break;

            case 4:
            printf("\nExit successful");
            return 0;
            break;

            default:
            printf("\nEnter your choice in the given option");
            break;
        }
    }while(option<4);
    getch();
}