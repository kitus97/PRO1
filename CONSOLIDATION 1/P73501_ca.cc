#include<iostream>
using namespace std;

int main(){

    int n, m, anterior;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        int aux = 0;
        cin >> m;
        while (m != 0){
            anterior = m;
            cin >> m;
            if (m > anterior) ++aux;
        }
        cout << aux << endl;
    }
}
