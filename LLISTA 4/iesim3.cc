#include <iostream>
using namespace std;


int main(){

    int i, n;
    cin >> i;

    int b = 0;
    int posicio = 0;
    while(cin >> n and i != -1){

        ++b;
        if(b == i){

            posicio = n;
        }
    }

    if(i > b or i <= 0){

        cout << "Posicio incorrecta." << endl;
    } else{

        cout << "A la posicio " << i << " hi ha un " << posicio << "." << endl;
    }
}
