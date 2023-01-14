#include <iostream>
using namespace std;
int main() {

    int n;
    int h = 0;
    int m = 0;
    int s = 0;
    cin >> n;

    while(n >= 3600){

        n -= 3600;
        ++h;

    }

    while(n >= 60){

        n -= 60;
        ++m;

    }

    while(n > 0){

        --n;
        ++s;

    }

    cout << h << " " << m << " " << s << endl;

}
