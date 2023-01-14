#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matriu;

void defineix_matriu(Matriu& m) {
    int x = m.size();
    int y = m[0].size();
    for (int fil = 0; fil < x; ++fil) {
        for (int col = 0; col < y; ++col){
            cin >> m[col][fil];
        }
    }
}

void escriu_matriu(const Matriu& m) {
    int x = m.size();
    int y = m[0].size();
    for (int fil = 0; fil < x; ++fil) {
        bool primer = false;
        for (int col = 0; col < y; ++col){
            if (not primer) {
                cout << m[col][fil];
            }
            else {
                cout << " " << m[col][fil];
            }
            primer = true;
        }
        cout << endl;
    }
}

bool direccio(const Matriu& y, const string& x, int a, int b, const string& z) {
        int str = 0;
        int f = a;
        int c = b;
        bool encaixa = true;
        while (encaixa) {
            encaixa = (x[str] == y[f][c]);
            if (z == "horitzont") ++f;
            else if (z == "vertic") ++c;
            else {
                ++f;
                ++c;
            }
            ++str;
            if (encaixa) return true;
            else {
                return false;
            }
        }
}

bool posicio (const Matriu& y, const string& x, int a, int b, const string& d) {
    int files = a;
    int columnes = b;
    bool hori = (int(y.size()) - int(x.size()) - (a) >= 0);
    bool vert = (int(y[a].size()) - int(x.size()) - (b) >= 0);
    bool diag = ((int(y.size()) - int(x.size()) - (a) >= 0) and (int(y[a].size()) - int(x.size()) - (b) >= 0));
    if (hori and vert and diag) {
       return direccio(y, x, a, b, d);
    }
}

void maj_min(Matriu& m, string str, int a, int b, bool horitzontal, bool vertical, bool diagonal) {
    int nfil = m.size();
    int ncol = m[0].size();
    int x = a;
    int y = b;
    for (int i = 0; i < str.size() and x < nfil and y < ncol; ++i) {
        if (m[x][y] > 'Z') {
            str[i] = m[x][y] - ('a' - 'A');
        }
        if (horitzontal) {
            ++y;
        } else if (vertical) {
            ++x;
        } else if (diagonal) {
            ++x;
            ++y;
        }
    }
}

void buscar_paraules(Matriu& m, vector<string> S) {
    int nfil = m.size();
    int ncol = m[0].size();
    for (int k = 0; k < nfil; ++k) {
        for (int j = 0; j < ncol; ++j) {
            for (int i = 0; i < S.size(); ++i) {
                string str = S[i];
                char c = str[0] - ('a' - 'A');
                if (m[k][j] == str[0] or m[k][j] == c) {
                    string h = "horitzont", v = "vertic", d = "diagon";
                    if (posicio(m, str, k, j, h)) {
                        maj_min(m, str, k, j, true, false, false);
                    } else if (posicio(m, str, k, j, v)) {
                        maj_min(m, str, k, j, false, true, false);
                    } else if (posicio(m, str, k, j, d)) {
                        maj_min(m, str, k, j, false, false, true);
                    }
                }
            }
        }
    }
}

int main() {
    int z, x, y;
    bool primer = true;
    while (cin >> z >> x >> y) {
        vector<string> S(z);
        for (int i = 0; i < z; ++i) {
            cin >> S[i];
        }

        Matriu m(x, vector<char> (y));

        defineix_matriu(m);
        buscar_paraules(m, S);
        if (not primer) cout << endl;
        else primer = false;
        escriu_matriu(m);
    }
}
