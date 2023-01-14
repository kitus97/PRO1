#include<iostream>
using namespace std;

int main(){

    string a, b;
    cin >> a;

    int j = 1, p;
    bool trobat = false;
    while(cin >> b and trobat == false){

        if(b == a and trobat == false){

            p = j;
            trobat = true;
        }
        ++j;
    }
    if(trobat == true) cout << p << endl;
    else cout << "No existe" << endl;
}
