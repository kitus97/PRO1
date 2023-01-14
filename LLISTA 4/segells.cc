#include<iostream>
using namespace std;


int main(){

    int n, p, q = 0;


    while(cin >> n){

        if(n > 19){

            p = n/7;
            while(p*7+q*4 != n){

                if(p*7+q*4 < n) ++q;
                else if(p*7+q*4 > n) --p;

            }
            cout << p << " " << q << endl;
        }
    }
}

