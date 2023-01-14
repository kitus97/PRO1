#include<iostream>
using namespace std;

bool is_prime(int sum) {
    if (sum < 2) return false;
    for (int i = 2; i * i <= sum; i++) {
        if (sum % i == 0) return false;
    }
    return true;
}

bool es_primer_perfecte(int n) {
    if (not is_prime(n)) return false;
    else {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        bool prime = is_prime(sum);
        if (sum < 10 and prime) return true;
        else if (prime) return es_primer_perfecte(sum);
        else return false;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        cout << es_primer_perfecte(n) << endl;
    }

}
