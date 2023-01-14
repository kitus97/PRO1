#include<iostream>
using namespace std;

bool es_capicua(int n){

    if (n < 10){
        return true;
    } else {
        int digits = 0;
        int digits_n = n;
        while (digits_n != 0){
            ++digits;
            digits_n /= 10;
        }

        int primera = n;
        int segona = n;
}
int main(){
    int n, h, m, s;
    cin >> n;

    descompon(n, h, m, s);
    cout << h << " " << m << " " << s << endl;
}
