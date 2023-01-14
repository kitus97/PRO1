#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a < b) return b;
    else return a;
}

int engreixa(int x) {
    if (x < 10) return x;
    else {
        int f = engreixa(x / 10);
        int maximum = max(f % 10, x % 10);
        return f * 10 + maximum;
    }
}

int main() {
    int n;
    cin >> n;

    cout << engreixa(n) << endl;
}
