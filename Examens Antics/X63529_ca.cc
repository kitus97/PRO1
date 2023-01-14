#include<iostream>
using namespace std;

int main(){

    int h, m, d;
    cin >> h >> m >> d;

    if((0 <= h < 24) and (0 <= m < 60) and (d >= 0)){

        m += d;
        while(m > 59){

            m -= 60;
            ++h;
        }while(h > 23){

            h -= 24;
        }

        if(h < 10){
            cout << "0" << h << ":";
        }else cout << h << ":";
        if(m < 10){
            cout << "0" << m << endl;
        }else cout << m << endl;
    }
}
