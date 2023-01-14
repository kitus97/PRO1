#include<iostream>
using namespace std;

int main(){

    int n, m, anterior, central, digits = 1;
    bool ok = false;
    cin >> n;

    cin >> m;
    int aux = m;
    while (aux > 9){
        aux /= 10;
        ++digits;
    }
    for (int i = 1; i <= digits/2 + 1; ++i){
        m /= 10;
    } central = m%10;
    int i = 2;
    cout << "m = " << m << " central = " << central << " digits = " << digits << endl;
    for (i; i <= 2*n; ++i){
        digits = 1;
        anterior = central;
        cin >> m;
        int aux = m;
        while (aux > 9){
            aux /= 10;
            ++digits;
        } for (int i = 1; i <= digits/2 + 1; ++i){
            m /= 10;
        } central = m%10;
        cout << digits << endl;
        if (digits % 2 == 0){
            ok = false;
            break;
        }
        if (central == anterior) ok = true;
        else{
            ok = false;
            break;
        }
    }
    if (not ok and i % 2 == 0) cout << "A" << endl;
    else if (not ok and i % 2 != 0) cout << "B" << endl;
    else if (ok) cout << "=" << endl;
}
