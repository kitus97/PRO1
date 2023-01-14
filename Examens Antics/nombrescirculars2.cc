#include<iostream>
using namespace std;

int main(){

    int numero;
    cin >> numero;

    int redons = 0;
    while(numero != -1){
        if(numero >= 0){
            bool ultim = true;
            int a = numero % 10, c = numero;
            for(int j = 1; c >= 10; ++j){

                c /= 10;
            }

            if(a == c){
                cout << numero << endl;
                ++redons;
            }
            cin >> numero;
        }
    }
    cout << "total: " << redons << endl;
}
