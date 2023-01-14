#include<iostream>
#include<vector>
using namespace std;

void resultat(vector<int>& s) {
    for (int k = 0; k < s.size(); ++k) {
        if (s[k] != 0) {
            cout << 1000000000 + k << " : " << s[k] << endl;
        }
    }
}

void contador(vector<int>& p) {
    vector<int> s(1001);
    for (int k = 0; k < p.size(); ++k) {
        int m = p[k] % 10000;
        ++s[m];
    }
    resultat(s);
}


int main(){

    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    contador(p);
}
