#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(6);

    for(int i = 1; i <= n; ++i){

        string s;
        cin >> s;

        if(s == "rectangle"){

            double a;
            double b;
            cin >> a >> b;
            cout << a*b << endl;

        } else if(s == "cercle"){

            double r;
            cin >> r;
            cout << r*r*3.14159265358979323846 << endl;

        }

    }

}
