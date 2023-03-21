#include <stdio.h>
#include <conio.h>
int main(){
    int choice;
    printf("Enter: ");
    scanf("%d",&choice);
    for(int i=1;i<=choice;i+=8){
        printf("\t8");
    }
    return 0;
}