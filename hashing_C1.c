#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10
int scissor(int);
struct hash{
    int data;
    int key;
};
struct hash *array;
int main(){
    int choice,count=0;
    int data,pos,index;
    array=(struct hash *)malloc(size*sizeof(struct hash));
    for(int i=0;i<size;++i){
        array[i].data=0;
        array[i].key=0;
    }
    do{
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter the pos and data:");
            scanf("%d %d",&pos,&data);
            index=scissor(pos);
            if(array[index].data==0){
                array[index].key=pos;
                array[index].data=data;
            }
            else if(array[index].key==index){
                array[index].data=data;
            }
            else{
                printf("\nCollision find");
            }
            break;
            case 2:
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            index=scissor(pos);
            if(array[index].data==0){
                printf("\nNo values exists\n");
            }
            else{
                array[index].data=0;
                array[index].key=0;
            }
            break;
            case 3:
            printf("\nDisplaying the values:\n");
            for(int i=0;i<size;++i){
                if(array[i].data==0){
                    printf("\narray[%d]=(null)",i);
                }
                else{
                    printf("\narray[%d]: %d",i,array[i].data);
                }
            }
            break;
            case 4:
            printf("\nExit Successfull");
            return 0;
            break;
            default:
            printf("\nEnter the given options as possible");
            break;
        }
    }while(1);
    getch();
}
int scissor(int sci){
    int sp;
    sp=sci%size;
    return sp;
}