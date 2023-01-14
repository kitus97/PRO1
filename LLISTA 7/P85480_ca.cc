#include<iostream>
#include<vector>
using namespace std;

bool primer(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool parells_prims(const vector<int>& S) {
    for (int i = 0; i < S.size(); ++i) {
        for (int k = 0; k < S.size(); ++k) {
            if (primer(S[i]+S[k]) and k != i) return true;
        }
    }
    return false;
}

int main(){

    int n;

    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            S[i] = a;
        }
        if (parells_prims(S)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
