#include <stdio.h>
#include <stdlib.h>
void main(){
    int arr[50];
    int n,d,swap;
    int flag=0;
    int mid,high,low;
    printf("\nno.of datas?> ");
    scanf("%d",&n);
    printf("\nEnter %d data's: \n\n",n);

    for(int i=0;i<n;++i){
        scanf("%d",&d);
        arr[i]=d;
    }

    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            if(arr[i]>arr[j]){
                swap=arr[i];
                arr[i]=arr[j];
                arr[i]=swap;
            }
        }
    }

    printf("\nEnter data to search: ");
    scanf("%d",&d);

    mid=n/2;
    if(arr[mid]==d){
        flag=1;
    }
    else if(arr[mid]>d){
        for(int i=mid+1;i<n;++i){
            if(arr[i]==d) flag=1;
        }
    }
    else{
        for(int i=0;i<mid;++i){
            if(arr[i]==d){
                flag=1;
            }
        }
    }
    for(int i=0;i<n;++i){
        if(arr[i]==d){
            flag=1;
        }
    }
    if(flag==1){
        printf("\n\nEnter data %d found",d);
    }
    else{
        printf("\nEnter data Not found");
    }
}