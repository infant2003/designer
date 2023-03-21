#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    int num;
    float ans1;
    double ans2;
    cout << "Enter to see the sqrt of a given number: ";
    cin >> num;
    ans1 = sqrt(num);
    ans2 = pow(num, 0.5);
    cout << "The sqrt value of given number is: " << ans1 << " and " << ans2;
    getch();
}