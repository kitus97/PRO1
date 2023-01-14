#include<iostream>
#include<vector>
using namespace std;

bool suma_dels_demes(const vector<int>& S) {
    int suma = 0;
    for (int i = 0; i < S.size(); ++i) {
        suma += S[i];
    }
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == suma - S[i] ) return true;
    }
    return false;
}

int main(){

    int n;
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < S.size(); ++i) {
            int a;
            cin >> a;
            S[i] = a;
        }
        if (suma_dels_demes(S)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
