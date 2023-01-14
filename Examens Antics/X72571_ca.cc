#include<iostream>
using namespace std;

int main(){

    int f, c;
    char casella;
    cin >> f >> c;

    int monedes = 0, monedes_senar = 0;
    for(int i = 1; i <= f; ++i){

        for(int k = 1; k <= c; ++k){

            cin >> casella;
            monedes += (casella - 48);
            if(i % 2 == 1) monedes_senar += (casella - 48);
        }
    }
    cout << monedes << " " << monedes_senar << endl;
}



