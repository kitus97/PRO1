#include<iostream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.precision(2);

    string paraula;
    double a, b, c;

    while(cin >> paraula){

        double resultat;
        if(paraula == "perimetro"){

            cin >> a >> b >> c;
            resultat = a + b + c;
            cout << resultat << endl;
        } else if(paraula == "area"){

            cin >> a >> b;
            resultat = (a * b)/2;
            cout << resultat << endl;
        } else if(paraula == "acabar") break;
    }
}



