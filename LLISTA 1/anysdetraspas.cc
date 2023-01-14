#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n >= 1800 and n <= 9999){

        if(n%4 == 0){

            if(n%100 == 0 and (n/100)%4 == 0){

            cout << "YES" << endl;

            }else if(n%100 != 0){

                cout << "YES" << endl;

            }else cout << "NO" <<endl;

        }else cout << "NO" << endl;

    }

    else cout << endl;

}
