#include<iostream>
using namespace std;

int main(){

    int n, s;
    cin >> n;

    int l = 0;
    int r = n;
    s = n%10;
    while(r /= 10){

        if(l%2 != 0){

            s += r%10;
        }

        ++l;
    }

    if(s%2 == 0){

        cout << n << " ES TXATXI" << endl;
    } else cout << n << " NO ES TXATXI" << endl;

}
