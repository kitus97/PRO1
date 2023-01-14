#include<iostream>
using namespace std;

void binari(int n){
    if (n != 0){
        binari(n/2);
        cout << n%2;
    }

}

void octal(int n){
    if (n != 0){
        octal(n/8);
        cout << n%8;
    }
}

void hexadecimal(int n){
    if (n != 0){
        hexadecimal(n/16);
        if (n % 16 == 15) cout << 'F';
        else if (n % 16 == 14) cout << 'E';
        else if (n % 16 == 13) cout << 'D';
        else if (n % 16 == 12) cout << 'C';
        else if (n % 16 == 11) cout << 'B';
        else if (n % 16 == 10) cout << 'A';
        else cout << n%16;
    }
}

int main(){

    int n;

    while (cin >> n){
        cout << n << " = ";
        if (n > 0){
            binari(n);
            cout << ", ";
            octal(n);
            cout << ", ";
            hexadecimal(n);
            cout << endl;
        } else cout << "0, 0, 0" << endl;
    }
}
