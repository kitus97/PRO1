#include<iostream>
#include<vector>
using namespace std;


void invertir_paraula(string c) {
    for (int k = c.length() - 1; 0 <= k; --k) {
        cout << c[k];
    }
}



void invertir(vector<string> S) {
    for (int j = S.size() - 1; 0 <= j; --j) {
        string c = S[j];
        invertir_paraula(c);
        cout << endl;
    }
}




int main(){

    int n;

    while(cin >> n){
        vector<string> S(n);
        for(int i = 0; i < n; ++i){
            string c;
            cin >> c;
            S[i] = c;
        }

        if (n != 0) {
            invertir(S);
        }
    }
}
