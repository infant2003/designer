//2 stack data structure
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define zcx 50
#define max1 25
#define max2 25
int top1=-1, top=-1;
int top2=-1;
int arr1[zcx], arr2[zcx], ovral[zcx];
int main(){
    int choice;
    do{
        printf("\n1.goto_array_1\n2.goto_array_2\n3.to_display_all\n4.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("\nyou choosed the array 1");
            int item, option;
            printf("\n1.push\n2.pop\n3.diplay");
            scanf("%d",&option);
            if(option==1){
                if(top1==max1-1)
                printf("\narray 1 is full");
                else{
                    printf("\nEnter the item top push: ");
                    scanf("%d",&item);
                    arr1[top1++]=item;
                }
            }
            if(option==2){
                if(top1==-1)
                printf("\nArray 1 underflow.");
                else{
                    item=arr1[top1--];
                    printf("\nThe deleted item is: %d",item);
                }
            }
            if(option==3){
                int i=0;
                if(top1==-1)
                printf("\nNo elements to dipslay.");
                else{
                    while(arr1[i]!='\0'){
                        printf("%d\t",arr1[i]);
                        i++;
                    }
                }
            }
        }

        if(choice==2){
            printf("\nyou choosed the array 2");
            int item, option;
            printf("\n1.push\n2.pop\n3.diplay");
            scanf("%d",&option);
            if(option==1){
                if(top2==max2-1)
                printf("\narray 1 is full");
                else{
                    printf("\nEnter the item top push: ");
                    scanf("%d",&item);
                    arr2[top2++]=item;
                }
            }
            if(option==2){
                if(top2==-1)
                printf("\nArray 2 underflow.");
                else{
                    item=arr2[top2--];
                    printf("\nThe deleted item is: %d",item);
                }
            }
            if(option==3){
                int i=0;
                if(top2==-1)
                printf("\nNo elements to dipslay.");
                else{
                    while(arr2[i]!='\0'){
                        printf("%d\t",arr1[i]);
                        i++;
                    }
                }
            }
        }

        if(choice==3){
            int i=0;
            for(int i=0, top=-1;arr1[i]!='\0';++i){
                top++;
                ovral[top]=arr1[i];
            }
            for(int i=0, top=-1;arr2[i]!='\0';++i){
                top++;
                ovral[top]=arr2[i];
            }
            printf("\nDisplaying the values: ");
            while(ovral[i]!='\0'){
                printf("%d\t",ovral[i]);
                i++;
            }
        }
    }while(choice<4);
    getch();
}