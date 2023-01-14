#include<iostream>
using namespace std;

int main(){

    int h0, m0, h1, m1;
    cin >> h0 >> m0 >> h1 >> m1;

    if((0 <= h0 and h0 < 24) and (0 <= m0 and m0 < 60) and (0 <= h1 and h1 < 24) and (0 <= m1 and m1 < 60)){

        m1 -= m0;
        h1 -= h0;

        if(m1 < 0){

            m1 += 60;
            --h1;
        }

        if(h1 < 0){

            h1 += 24;
        }

        if(h1 < 10) cout << "0" << h1 << ":";
        else cout << h1 << ":";

        if(m1 < 10) cout << "0" << m1 << endl;
        else cout << m1 << endl;

    }
}
