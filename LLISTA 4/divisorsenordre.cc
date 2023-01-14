#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;

    while(cin >> n){

        int arrel = sqrt(n);

        cout << "divisors de " << n << ":";

        for(int i = 1; i*i <= n; ++i){

            if(n % i == 0) cout << " " << i;
        }

        for(arrel; 0 < arrel; --arrel){

            if(n % arrel == 0 and arrel != n/arrel) cout << " " << n/arrel;
        }
        cout << endl;
    }
}
