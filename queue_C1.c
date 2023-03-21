#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define zcx 50
int front=-1,rear=-1;
int arr[zcx];
int main(){
    int choice, item, i=0, count;
    do{
        printf("\n1.push\n2.pop\n3.total_delete\n4.display\n5.exit");
        printf("\nEnter your option: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(rear==zcx-1)
            printf("\nQueue cross the limit");
            else{
                printf("\nEnter the item to push: ");
                scanf("%d",&item);
                arr[rear++]=item;
                printf("\nSuccessful");
            }
            break;

            case 2:
            if(front==rear)
            printf("\nCan't able to pop");
            else{
                item=arr[front++];
                printf("\nDeleted item is: %d",item);
            }
            break;

            case 3:
            count=0;
            if(front==rear)
            printf("\nQueue is empty");
            while(arr[i]!='\0'){
                count++;
                i++;
            }
            printf("\nTime perform is: %d",count);
            for(int x=0;x<count;++x){
                item=arr[front++];
                printf("\nDeleted: %d",item);
            }
            break;

            case 4:
            if(front<=0 && rear<=0)
            printf("\nNo, values to display");
            printf("\nDisplaying the final value");
            while(arr[i]!='\0'){
                printf("%d\t",arr[i]);
                i++;
            }
            break;

            case 5:
            printf("Exit Successful");
            return 0;
            break;

            default:
            printf("\n***User enter only the given option.");
            break;
        }
    }while(choice<4);
    getch();
}