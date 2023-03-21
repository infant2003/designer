#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int n,data,temp;
    int arr[10];
    printf("\nEnter the no.of elements to perform: ");
    scanf("%d",&n);
    printf("\nEnter the %d values: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    for(int i=1;i<n;++i){
        for(int j=0;j<i;++j){
            if(arr[i]<arr[j]){
                temp=arr[i];
                for(int k=i;k>j;++k){
                    arr[k]=arr[k-1];
                    arr[k]=temp;
                }
            }
        }
    }
    printf("\nSorted array: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    getch();
}