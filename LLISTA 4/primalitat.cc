#include <iostream>
using namespace std;


bool prim(int m){

    bool si = false;
    if(m == 1) return false;
    if(m == 2) return true;
    if(m % 2 == 0) return false;
    for(int k = 3; not si and k*k <= m; k += 2){

        if(m % k == 0) si = true;
    }
    return not si;
}

int main(){

    int n, m;

    cin >> n;
    for(int i = 0; i < n; ++i){

        cin >> m;
        if (prim(m)) cout << m << " es primer" << endl;
        else cout << m << " no es primer" << endl;
    }
}
