#include<iostream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        int m, k = 1;
        double nombre, mitjana = 0, min, max;
        cin >> m;
        for (k; k <= m; ++k){
            cin >> nombre;
            if (k == 1){
            min = nombre;
            max = nombre;
            }
            if (nombre < min) min = nombre;
            if (nombre > max) max = nombre;
            mitjana += nombre;
        }
        mitjana /= (k - 1);
        cout << min << " " << max << " " << mitjana << endl;
    }
}
