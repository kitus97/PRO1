#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;


    if (n >= 100){

        int s = 0;
        int r;
        for(int i = 0; i < 3; ++i){

            r = n%10;
            n /= 10;
            s += r;

        }

        cout << s << endl;

    } else cout << endl;

}
