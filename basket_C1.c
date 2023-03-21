//find set of sum in the array
#include <stdio.h>
#include <stdlib.h>
void printer(int[],int,int);
int main(){
    int arr[50];
    int n,data;
    printf("\nEnter no.of data's: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    printf("\nThe max subarray value: ");
    scanf("%d",&data);
    for(int i=0;i<n;++i){
        int sum=0;
        for(int j=i;j<n;++j){
            sum+=arr[j];
            if(data==sum){
                printer(arr,i,j);
            }
        }
    }
}
void printer(int arr[],int i,int j){
    for(int k=i;k<=j;++k){
        printf("%d\t",arr[k]);
    }
    printf("\n");
}