#include<iostream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.precision(2);
    double n;
    string mesura;

    cin >> n >> mesura;

    if(mesura == "milles") cout << n*1.6093 << " quilometres" << endl;
    else cout << n/1.6093 << " milles" << endl;

}
