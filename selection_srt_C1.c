#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[50];
    int n,data,swap;
    printf("\nENter total data's: ");
    scanf("%d",&n);
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    printf("\nBefore sorting: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]>arr[j]){
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    printf("\nAfter sorted: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
}