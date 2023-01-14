#include <iostream>
using namespace std;

int main() {

    int d, n, t;
    cin >> d >> n >> t;

    if((d >= 0) and (n >= 0) and (t >= 0)){

    int a;
    int s = n;
    int m = 0;
        for(int i = 1; i <= t; ++i){

            cin >> a;

            s += a;
            s -= d;

            if(s > 0){

                ++m;

            }

        } cout << m;
    }

    cout << endl;

}
