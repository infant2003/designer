#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int front=-1, rear=-1;
int arr[zcx];
int main(){
    int option, item, index=0, i=0, count=0;
    do{
        printf("\n1.push\n2.pop\n3.full_delete\n4.display\n5.exit");
        printf("\nEnter your option to perform: ");
        scanf("%d",option);
        switch(option){
            case 1:
            if(rear==zcx-1)
            printf("\nPush is invalid");
            printf("\nEnter the element to push: ");
            scanf("%d",&item);
            arr[rear++]=item;
            printf("\nSuccessful");
            break;

            case 2:
            if(front==rear)
            printf("\ndeletion is not possible");
            item=arr[front++];
            printf("\nThe deleted item is: %d",item);
            break;

            case 3:
            while(arr[i]!='\0'){
                count++;
                i++;
            }
            printf("\nThe total runtime: %d",count);
            for(int i=0;i<count;++i){
                item=arr[front++];
                printf("\tDeleted: %d",item);
            }
            break;

            case 4:
            if(rear==front)
            printf("\nNo elements to display");
            printf("\nDisplaying user defined values: ");
            while(arr[i]!='\0'){
                printf("%d\t",arr[i]);
                i++;
            }
            break;

            case 5:
            printf("\nExit successful");
            return 0;
            break;

            default:
            printf("\nUser options must be in the given range<6");
            break;
        }
    }while(option<5);
    getch();
}