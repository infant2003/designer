#include <stdio.h>
#include <conio.h>
#define data1 20
#define data2 20
int main(){
    int mat1[data1][data2], a, i, j;
    printf("Enter the row size: ");
    scanf("%d",&i);
    printf("Enter the column value: ");
    scanf("%d",&j);
    printf("correct path...");
    if(i>0 && i<=20 || j>0 && j<=20){ 
        for(int x=0;x<i;++x){
            for(int y=0;y<j;++y){
                printf("mat1[%d][%d]-->",x,y);
                scanf("%d\n",&mat1[x][y]);
            }
        }
        printf("displaying the values...\n");
        for(int x=0;x<i;++x){
            for(int y=0;y<j;++y){
                printf("mat1[%d][%d]",x,y);
                printf("%d\n",mat1[x][y]);
            }
        }
    }
    else{
        printf("please enter values between 1 to 20...\n");
    }
    return 0;
}