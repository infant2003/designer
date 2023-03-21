//3d structure
#include <stdio.h>
#include <conio.h>
#define data1 20
#define data2 20
#define data3 20
int main(){
    int a[data1][data2][data3], x, y, z;
    printf("Enter the initial value: ");
    scanf("%d",&x);
    printf("Enter the secondary value: ");
    scanf("%d",&y);
    printf("Enter the last value: ");
    scanf("%d",&z);
    if(x>0 && x<=20 || y>0 && y<=20 || z>0 && z<=20){
        printf("correct path...\n");
        for(int i=0;i<x;++i){
            for(int j=0;j<y;++j){
                for(int k=0;k<z;++k){
                    printf("Enter arr[%d][%d][%d]",i,j,k);
                    scanf("%d\n",&a[i][j][k]);
                }
            }
        }
        printf("displaying values...");
        for(int i=0;i<x;++i){
            for(int j=0;j<y;++j){
                for(int k=0;k<z;++k){
                    printf("Enter arr[%d][%d][%d]",i,j,k);
                    printf("\t%d",a[i][j][k]);
                }
            }
        }
    }
    else{
        printf("Enter the 3d values between 0 to 20...");
    }
    return 0;
}