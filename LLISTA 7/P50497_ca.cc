#include<iostream>
#include<vector>
using namespace std;

bool es_palindrom(const string& s) {
    int k = 0;
    int i = s.size() - 1;
    while (k <= i) {
        if (s[k] != s[i]) return false;
        ++k;
        --i;
    }
    return true;
}

int main(){

    string s;
    cin >> s;

    cout << es_palindrom(s) << endl;
}
