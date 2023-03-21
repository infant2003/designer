#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[50],got1[50];
    int n,data,min,max;
    int count=0,cov;
    printf("\nEnter: ");
    scanf("%d",&n);
    cov=n;
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    max=arr[0];
    for(int i=0;i<n;++i){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;++i){
        min=max;
        for(int j=0;j<cov;++j){
            if(min>arr[j]){
                min=arr[j];
                data=j;
            }
        }
        for(int k=data;k<n;++k){
            arr[k]=arr[k+1];
        }
        cov--;
        got1[count++]=min;
    }
    printf("\nThe sorted output: \n");
    for(int i=0;i<count;++i){
        printf("%d\t",got1[i]);
    }
}