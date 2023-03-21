#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
    int i, j, len;
    char a[100];
    cout << "Enter the string: ";
    fgets(a, sizeof(a), stdin);
    len = strlen(a);
    for(int i; i < len; ++i){
        if(a[i] == ' '){
            for(int j = i; j < len; j++){
                a[j] = a[j+1];
            }
            j--;
        }
    }
    cout << "The bubbles remove from the sentsnce is: " << a;
    getch();
}