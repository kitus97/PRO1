#include<iostream>
using namespace std;

int main(){

    int n;
    char c1, c2, c3;

    cin >> n >> c1 >> c2;

    if(n > 0){

        int j = 0, total = 0;
        while(j < n){

            cin >> c3;
            if((int(c1) <= int(c3)) and (int(c3) <= int(c2))){

                ++total;
            }
            ++j;
        }
        if(j >= n) cout << total << endl;
    }
}

