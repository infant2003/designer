#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class data1{
    public:
    void calculas(int p, int n, float r){
        int SI;
        SI = p*n*r/100;
        cout << "The value of simple intrest is: " << SI;
    }
};
int main(){
    data1 d1;
    d1.calculas(10000,8,0.8);
    return 0;
}