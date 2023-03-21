//fitting the hash tables
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int arr[zcx],count[zcx];
int main(){
    int n,item,i,r,collect[zcx],index=0;
    printf("\nEnter no.of elemenets to push: ");
    scanf("%d",&n);
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        arr[i]=item;
    }
    int sum=0,cout=0;
    for(int i=0;i<n;++i){
        while(arr[i]!='\0'){
            r=arr[i]%1000;
            arr[i]=arr[i]/1000;
            sum=sum+r;
        }
        count[i]=sum;
        sum=0;
    }
    printf("\nValues Fit in Hash Table: \n");
    for(int i=0;i<n;++i){
        if(count[i]<1000){
            printf("%d\t",count[i]);
            collect[index++]=count[i];
            cout++;
        }
    }
    if(cout==0){
        printf("No values found\n");
    }
    cout=0;
    printf("\nValues doesn't Fit in Hash Table: \n");
    for(int i=0;i<n;++i){
        if(count[i]>1000){
            printf("%d\t",count[i]);
            cout++;
        }
    }
    if(cout==0){
        printf("No values found\n");
    }
    for(int i=0;i<n;++i){
        if(count[i]>1000){
            r=count[i]%10;
            count[i]=count[i]/10;
            sum=count[i]+r;
        }
        collect[index++]=sum;
        count[i]=sum;
        sum=0;
    }
    printf("\n\nAfter fitting the values: \n");
    for(int i=0;i<index;++i){
        if(collect[i]<1000 && collect[i]>0){
            printf("%d\t",*(collect+i));
        }
    }
    getch();
}