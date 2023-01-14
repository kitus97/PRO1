#include<iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s){
    m = n/60;
    s = n - 60*m;
    h = m/60;
    m = m - 60*h;
}
int main(){
    int n, h, m, s;
    cin >> n;

    descompon(n, h, m, s);
    cout << h << " " << m << " " << s << endl;
}
