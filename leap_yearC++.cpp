#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a;
    cout << "Enter the year to see leap: ";
    cin >> a;
    if(a % 4 == 0){
        cout << "The given year is leap year.";
    }
    else{
        cout << "The given year is not leap year.";
    }
    getch();
}