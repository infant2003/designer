#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[50];
    int n,data,swap;
    printf("\nEnter no.of inputs: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    printf("\nBefore sorted: \n");
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