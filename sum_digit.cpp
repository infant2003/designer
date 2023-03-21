#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main(){
    int a, b, sum = 0;
    cout << "Enter the value of a: ";
    cin >> a;
    while(a > 0){
        b = a % 10;
        a = a / 10;
        sum = sum + b;
    }
    cout <<sum; 
    getch();
}