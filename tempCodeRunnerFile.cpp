#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int no, a, rev = 0, r;
    cout << "Enter the value of a: ";
    cin >> no;
    a = no;
    while(no > 0){
        r = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }
    cout << "The reverse of the number is " << rev;
    getch();
}