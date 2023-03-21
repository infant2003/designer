#include <iostream> 
#include <conio.h>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "The value of a and b is: " << a << " " << b;
    getch();
}