#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a;
    int m = 0;
    if (n > 0){

        while (cin >> a){

            if (a % n == 0){

                ++m;

            }
        }
        cout << m << endl;
    }
}
