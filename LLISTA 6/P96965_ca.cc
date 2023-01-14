#include<iostream>
using namespace std;

int suma_digits(int x){
    int total = 0;
    while(x != 0){
        total += x%10;
        x /= 10;
    } return total;
}

int reduccio_digits(int x){
    while (x > 9){
        x = suma_digits(x);
    } return x;
}

int main(){

    int n;
    cin >> n;

    cout << reduccio_digits(n) << endl;
}
