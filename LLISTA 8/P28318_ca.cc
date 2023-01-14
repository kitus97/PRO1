#include <iostream>
#include <vector>
using namespace std;

void defineix_matriu(vector< vector<int> >& matriu, int f, int c) {
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> matriu[i][k];
        }
    }
}
void llegir_matriu(vector< vector<int> >& matriu, int f, int c) {
    int b;
    string a;
    while (cin >> a >> b){
        cout << a << " " << b;
        if (a == "fila") {
            cout << ":";
            for (int i = 0; i < c; ++i){
                cout << " ";
                cout << matriu[b-1][i];
            }
            cout << endl;
        } else if (a == "columna") {
            cout << ":";
            for (int i = 0; i < f; ++i){
                cout << " ";
                cout << matriu[i][b-1];
            }
            cout << endl;
        } else if (a == "element") {
            int d;
            cin >> d;
            cout << " " << d << ": ";
            cout << matriu[b-1][d-1] << endl;
        } else cout << endl;
    }
}

int main() {
    int f, c;
    cin >> f >> c;

    vector < vector<int> > matriu(f, vector<int>(c));

    defineix_matriu(matriu, f, c);
    llegir_matriu(matriu, f, c);
}
