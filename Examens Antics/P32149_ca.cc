#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    if(n > 1){

        for(int i = 0; i < n; ++i){

            cout << "*";
        } cout << endl;

        for(int i = 2; i <= n; ++i){

            for(int k = 1; k <= n; ++k){

                if(k == i or k == n){
                    cout << "*";
                } else cout << " ";
            }
            cout << endl;
        }
    }
}

