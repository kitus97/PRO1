#include<iostream>
using namespace std;

int main(){

    string paraula, max, max2;

    cin >> max >> max2;

    if (max < max2){
        paraula  = max;
        max = max2;
        max2 = paraula;
    }

    while (cin >> paraula){

        if (paraula < max and max2 < paraula) max2 = paraula;
        else if (max < paraula){
            max2 = max;
            max = paraula;
        }
        else if (max == max2 and paraula < max) max2 = paraula;
    }

    cout << max2 << endl;
}
