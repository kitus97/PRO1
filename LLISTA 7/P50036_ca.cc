#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> p;

int avalua(const vector<int>& p, int x) {
    int resultat = 0;
    int grau = p.size() - 1;
    for (int i = grau; 0 <= i; --i) {
        resultat = resultat*x + p[i];
    }
    return resultat;
}


int main(){
}
