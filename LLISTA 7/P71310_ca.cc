#include<iostream>
#include<vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double sum = 0;
    for (int i = 0; i < u.size(); ++i) {
        sum += u[i]*v[i];
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    vector<double> u(n);
    vector<double> v(n);

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        u[i] = a;
    }

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v[i] = a;
    }
    cout << producte_escalar(u,v) << endl;
}
