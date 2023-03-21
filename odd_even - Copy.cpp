#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a;
    cout << "Enter the value of a:";
    cin >> a;
    if(a % 2 == 0){
        cout << "The given number is even number.";
    }
    else{
        cout << "The given number is odd number.";
    }
    getch();
}