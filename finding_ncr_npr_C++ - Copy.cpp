#include <iostream>
#include <conio.h>
using namespace std;
long int fact(int);
int main(){
	int n, r;
	long int ncr, npr;
	cout<<"Enter Any Value for n: ";
	cin>>n;
	cout<<"Enter Any Value for r: ";
	cin>>r;
	npr=fact(n)/fact(n-r);   
	ncr=npr/fact(r);          
	cout<<"NPR value = "<<npr<<"\n";
	cout<<"NCR value = "<<ncr<<"\n";
	getch();
}
long int fact(int x)  
{
	int i, f=1;
	for(i=2; i<=x; i++){
		f=f*i;
	}
	return f;
}