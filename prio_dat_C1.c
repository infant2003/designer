#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int main(){
    int timer[zcx][zcx],temp[zcx][zcx],data1[zcx],data2[zcx];
    int day,value,temprature;
    printf("\nEnter the day and temprature count: ");
    scanf("%d %d",&day,&value);
    printf("\nEnter the data:\n");
    for(int i=0;i<day;++i){
        printf("\nEnter the day %d temparature values: \n",i+1);
        for(int j=0;j<value;++j){
            timer[i][j]=j+6;
            scanf("%d",&temprature);
            temp[i][j]=temprature;
        }
    }
    printf("\nDisplaying the user entered values:\n");
    for(int i=0;i<day;++i){
        printf("\n\nDay:%d: \n",i+1);
        for(int j=0;j<value;++j){
            printf("\nTime:%d<-->Temparature:%d",timer[i][j],temp[i][j]);
        }
    }
    int max=0,count=0,time=0;
    for(int i=0;i<day;++i){
        for(int j=0;j<value;++j){
            if(max<temp[i][j]){
                max=temp[i][j];
                time=timer[i][j];
            }
        }
        data2[i]=time;
        data1[i]=max;
        max=0;time=0;
        count++;
    }
    printf("\n\nThe high temperature in the week: \n");
    for(int i=0;i<count;++i){
        printf("Temperature:%d\tTime:%d\n",data1[i],data2[i]);
    }
    getch();
}