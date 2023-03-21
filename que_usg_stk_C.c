#include <stdio.h>
#define zcx 10
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n, pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(int i=0;i<5;++i){
        for(int j=pos;j>i;++j){
            arr[j]=arr[j+1];
        }
    }
    //displaying the real index...
    printf("\nThe real array is:");
    int i=0;
    while(arr[i]!='\0'){
        printf("%d\t",arr);
        i++;
    }
    return 0;
}