#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
    char str[100], c;
    int count = 0, i;
    cout << "Enter any string: ";
    gets(str);
    cout << "Enter the character: ";
    cin >> c;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == c){
            count++;
        }
        else{
            return 0;
        }
    }
    cout<<"The frequency is: "<<count;
    getch();
}