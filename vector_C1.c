#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 20
int tim;
int main(){
    printf("\nEnter the no of scalars:");
    scanf("%d",&tim);
    int collect[zcx],index=0;
    for(int i=0;i<tim;++i){
    printf("\nEnter the scalar:%d\n",i+1);
    int vec1[zcx],vec2[zcx];
    int data,n,temp,sum=0;
    printf("\nEnter the no.of data's:");
    scanf("%d",&n);
    printf("\nEnter the vector 1 values:\n");
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        vec1[i]=data;
    }
    printf("\nEnter the vector 2 values:\n");
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        vec2[i]=data;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(vec1[i]<vec1[j]){
                temp=vec1[i];
                vec1[i]=vec1[j];
                vec1[j]=temp;
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(vec2[i]>vec2[j]){
                temp=vec2[i];
                vec2[i]=vec2[j];
                vec2[j]=temp;
            }
        }
    }
    for(int i=0;i<n;++i){
        sum=sum+(vec1[i]*vec2[i]);
    }
    collect[index++]=sum;
    }
    printf("\nThe scalar values:\n");
    for(int i=0;i<index;++i){
        printf("Case %d: %d\n",i+1,collect[i]);
    }
    getch();
}