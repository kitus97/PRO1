#include<iostream>
using namespace std;

int main(){

    int n;
    bool antecedent = false, precedent = false, pic = false;
    cin >> n;

    while(n != 0){
        int anterior = n;
        bool aux = false;
        cin >> n;
        if (n > anterior and n > 3143) antecedent = true, aux = true;
        if (antecedent and not aux and n < anterior and n != 0) precedent = true;
        if (antecedent and precedent) pic = true;
        if (not aux) antecedent = false;
    }
    if (pic) cout << "SI" << endl;
    else cout << "NO" << endl;
}
