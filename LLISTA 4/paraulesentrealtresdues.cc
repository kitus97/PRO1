#include <iostream>
using namespace std;


int main(){

    string a;

    int i = -1, pr = 0, fi = 0;
    bool principi = false, ultim = false, correcte = false;
    while(cin >> a and not ultim){

        if(a == "final"){

            ++fi;
            ultim = true;
            principi = false;

        }
        if(a == "principi"){

            ++pr;
            principi = true;
        }
        if(principi and not ultim) ++i;
    }

    if(pr == 1 and fi == 1) cout << i << endl;
    else cout << "sequencia incorrecta" << endl;
}
