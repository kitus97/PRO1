#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void defineix_matriu(Matriu& m, int x, int y) {
    for (int fil = 0; fil < x; ++fil) {
        for (int col = 0; col < y; ++col){
            cin >> m[col][fil];
        }
    }
}

void escriu_matriu(Matriu& m, int x, int y) {
    for (int fil = 0; fil < x; ++fil) {
        bool primer = true;
        for (int col = 0; col < y; ++col){
            if (primer) {
                cout << m[col][fil];
            }
            else {
                cout << " " << m[col][fil];
            }
            primer = false;
        }
        cout << endl;
    }
}

void canviar(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transposa(Matriu& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int k = i + 1; k < n; ++k) {
            canviar(m[i][k], m[k][i]);
        }
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    Matriu m(x, vector<int>(y));

    defineix_matriu(m, x, y);
    transposa(m);
    escriu_matriu(m, x, y);
}
