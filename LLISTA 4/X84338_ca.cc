#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int aux = n, i = 1;
    for (i; aux > 9; ++i){

        aux /= 10;
    }

    if (i % 2 == 0 and i > 1){

        int k = 1, dreta = 0, esquerra = 0, aux = n;
        while (k <= i/2){

            dreta += aux % 10;
            aux /= 10;
            ++k;
        }
        while (i >= k){

            esquerra += aux % 10;
            aux /= 10;
            ++k;
        }
        if (esquerra > dreta) cout << esquerra << " > " << dreta << endl;
        else if (esquerra < dreta) cout << esquerra << " < " << dreta << endl;
        else cout << esquerra << " = " << dreta << endl;
    } else cout << "res" << endl;
}

