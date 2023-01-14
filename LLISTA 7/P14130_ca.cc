#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n, total = 0;
    cin >> n;

    vector<int> S(n);
    for(int i = 0; i < n; ++i){
        cin >> S[i];
    }

    for(int i = 0; i < n-1; ++i){
        if (S[i] == S[n-1]) ++total;
    }

    cout << total << endl;
}
