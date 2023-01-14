´#include <iostream>

using namespace std;

int main() {
    double x;
    cin >> x;

    int y = x;
    cout << y << ' ';

    if (x - y > 0) cout << y + 1 << ' ';
    else cout << y << ' ';

    if (x - y >= 0.5) cout << y + 1 << endl;
    else cout << y << endl;



}
