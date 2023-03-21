#include <stdio.h>
#include <conio.h>
int fact(int);
int main(){
    int i,n;
    printf("\nEnter the value: ");
    scanf("%d",&i);
    n=fact(i);
    printf("\nThe fact value is: %d",n);
    getch();
}
int fact(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}