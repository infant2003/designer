#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int arr[50],got1[50];
    int n,data,set1,set2;
    int count=0,cov;
    printf("\nEnter: ");
    scanf("%d",&n);
    cov=n;
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    set2=arr[0];
    for(int i=0;i<n;++i){
        if(set2<arr[i]){
            set2=arr[i];
        }
    }
    for(int i=0;i<n;++i){
        set1=set2;
        for(int j=0;j<cov;++j){
            if(set1>arr[j]){
                set1=arr[j];
                data=j;
            }
        }
        for(int k=data;k<n;++k){
            arr[k]=arr[k+1];
        }
        cov--;
        got1[count++]=set1;
    }
    printf("\nThe sorted output: \n");
    for(int i=0;i<count;++i){
        printf("%d\t",got1[i]);
    }
    getch();
}