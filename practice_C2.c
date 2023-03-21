#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void TOH(void);
int main(){
    int n;
    char a,b,c;
    printf("\nEnter the total number of disks: ");
    scanf("%d",&n);
    TOH(n,A,B,C);
    getch();
}
void(int n, char a, char b, char c){
    if(n==1){
        printf("\nThe disk can be moved to A to C.");
    }
    else{
        TOH(n-1,a,b,c);
        printf("\n The disk is %d moved from %c to %c.",n,a,c);
        TOH(n-1,b,c,a);
    }
}