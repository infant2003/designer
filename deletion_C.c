//array index datas deleting
#include <stdio.h>
#include <conio.h>
int main(){
    int arr[50];
    int pos,num;
    printf("\nEnter the number of elements: ");
    scanf("%d",&num);
    printf("\nEnter %d elements in array",num);
    for(int i=0;i<num;i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\nDefine the position to delete the value: ");
    scanf("%d",&pos);
    if(pos>=num+1){
        printf("Deletion is not possible...");
    }
    else{
        for(int i=pos-1;i<num;++i){
            arr[i]=arr[i+1];
        }
        printf("\n The resultant array is: \n");
        for(int i=0;i<num;++i){
            printf("arr[%d]",i);
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}