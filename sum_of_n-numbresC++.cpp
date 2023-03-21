#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a, b = 0, N;
    cout << "Enter the value of a: ";
    cin >> a;
    for(int i = 1; i <= a; ++i){
        cin >> N;
        b = b + N;
    }
    cout << "The sum of the given number is: " << b;
    getch();
}