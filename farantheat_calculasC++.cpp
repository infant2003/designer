#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    //f = c * 9/5 + 32;
    int c, f;
    cout << "Enter the vakue of celcious: ";
    cin >> c;
    f = c * 9/5 + 32;
    cout << "The conversion of celsious to farenheat is: " << f;
    getch();
}