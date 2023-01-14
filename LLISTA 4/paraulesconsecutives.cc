#include <iostream>
using namespace std;


int main(){

    string p, c;

    cin >> p;
    int i = 1, j = 1;
    while(cin >> c){

        if(c == p){

            ++i;
            if(j <= i){

                j = i;
            }
        } else i = 0;

    }

    cout << j << endl;
}
