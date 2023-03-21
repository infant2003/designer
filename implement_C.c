#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
    printf("\n1.push \n2.pop \n3.push in given place \npop in given place \n5.display \n6.exit");
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

            case 4:
            int arr1[10];
            int post, num;
            printf("\nEnter the number of elements: ");
            scanf("%d",&num);
            printf("\nEnter %d elements in array",num);
            for(int i=0;i<num;i++){
                printf("\narr[%d]=",i);
                scanf("%d",&arr1[i]);
            }
            printf("\nDefine the position to delete the value: ");
            scanf("%d",&post);
            if(post>=num+1){
                printf("Deletion is not possible...");
            }
            else{
                for(int i=post-1;i<num;++i){
                    arr1[i]=arr1[i+1];
                }
                printf("\n The resultant array is: \n");
                for(int i=0;i<num;++i){
                    printf("arr[%d]",i);
                    printf("%d\n",arr1[i]);
                }
            }
            break;

            case 3:
            int arr1[100];
            int x, post, n=10;
            for(int i=0;i<10;i++){
                arr1[i]=i+1;
            }
            for(int i=0;i<n;++i){
                printf("%d\t",arr1[i]);
            }
            printf("\n");
            printf("Enter the value to push in given space: ");
            scanf("%d",&x);
            post=5;
            n++;
            for(int i=n-1;i>=post;i--){
                arr1[i]=arr1[i-1];
            }
            arr[post-1]=x;
            for(int i=0;i<n;++i){
                printf("%d\t",arr1[i]);
            }
            break; 

            case 5:
                int i;
                if(nd.top==-1){
                printf("\nThe stack is empty...");
                }
                if(nd.top==zcx-1){
                    printf("\nThe stack is full...");
                }
                else{
                    for(int i=nd.top;i>=0;i--){
                    printf("%d\t",nd.arr[i]);
                    }
                }
            break;

            case 6:
            printf("\nEXIT Successfull...");
            break;

            default:
            printf("Please enter in the range...");
        }
    }while(option<4);
    getch();
}