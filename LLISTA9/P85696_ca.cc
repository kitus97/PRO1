#include<iostream>
#include<vector>
using namespace std;

struct Racional {
         int num, den;
     };

Racional racional(int n, int d) {
    Racional r;
    if (n == 0) {
        r.num = 0;
        r.den = 1;
    }
    else {
        bool positiu;
        if (0 < n * d) {
            if (n < 0) {
                n *= -1;
                d *= -1;
            }
            positiu = true;
        } else {
            if (d < 0) d *= -1;
            else n *= -1;
            positiu = false;
        }
        int min;
        if (d < n) min = d;
        else min = n;
        for (int i = min; 2 <= i; --i) {
            if (n % i == 0 and d % i == 0) {
                n /= i;
                d /= i;
                min /= i; 
                ++i;
            }
        }
        if (positiu) r.num = n;
        else r.num = n*-1;
        r.den = d;
    }
    return r;
}

int main() {

}
