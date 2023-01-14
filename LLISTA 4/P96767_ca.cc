#include<iostream>
#include<cmath>
using namespace std;


int main(){

    cout.setf(ios::fixed);
    cout.precision(4);
    double x, n;
    cin >> x;

    int i = 0, suma = 0;
    while (cin >> n){

        suma += n * pow (x, i);
        ++i;
    } cout << suma << endl;
}

