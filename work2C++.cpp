#include <iostream>
#include <conio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b[100],c,temp,i,j;
    cout<<"Enter the number of terms: ";
    cin>>a;
    for(int i=0;i<a;++i){
        cin>>b[i];
    }
    for(int i=0;i<a;++i){
        for(int j=0;j<a;++j){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    cout<<"descending order is:";
    for(int i=0;i<a;++i){
        cout<<b[i]<<",";
    }
    getch();
}