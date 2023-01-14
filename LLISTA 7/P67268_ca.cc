#include<iostream>
#include<vector>
using namespace std;


void invertir(vector<int>& S) {

    int ultim = S.size() - 1;

    while (0 < ultim) {
        cout << S[ultim] << " ";
        --ultim;
    }
    cout << S[0];
}




int main(){

    int n;

    while(cin >> n){
        vector<int> S(n);
        for(int i = 0; i < n; ++i){
            cin >> S[i];
        }

        if (n != 0) {
            invertir(S);
        }
        cout << endl;
    }
}
