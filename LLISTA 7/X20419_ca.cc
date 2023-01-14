#include<iostream>
#include<vector>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1;

char lletra_mes_frequent(const string& s) {
    int max = 0;
    char c = LONG_ALFABET;
    for (int i = 0; i < s.size(); ++i) {
        int contador = 0;
        for (int k = 0; k < s.size(); ++k) {
            if (s[i] == s[k]) ++contador;
        }
        if (max < contador) {
            c = s[i];
            max = contador;
        } else if (max == contador) {
            if (s[i] <= c) {
                c = s[i];
                max = contador;
            }
        }
    }
    return c;
}


int main(){

    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    double longitud_mitjana = 0;
    cin >> n;

    vector<string> C(n);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        C[i] = s;
        longitud_mitjana += s.size();
    }
    longitud_mitjana /= n;
    cout << longitud_mitjana << endl;
    for (int i = 0; i < n; ++i) {
        if (C[i].size() >= longitud_mitjana){
            cout << C[i] << ": " << lletra_mes_frequent(C[i]) << endl;
        }
    }
}
