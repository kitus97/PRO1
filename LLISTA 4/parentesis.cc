#include <iostream>
using namespace std;


int main(){

    char c;

    bool correcte = true;
    int i = 0, j = 0;
    while(cin >> c and (c == '(' or c == ')')){

        ++i;
        if(c == '('){

            ++j;

        } else if(c == ')'){

            --j;
        }

        if(j == 0 and i % 2 == 0 and c == ')') i = 0;
        if(i == 1 and c == ')') correcte = false;
    }

    if(i == 0 and j == 0 and correcte){

        cout << "si" << endl;

    } else cout << "no" << endl;
}
