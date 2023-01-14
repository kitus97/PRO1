#include<iostream>
using namespace std;


bool es_triangle_rectangle(int a, int b, int c){

    int a_quadrat = a*a, b_quadrat = b*b, c_quadrat = c*c;
    if (a_quadrat + b_quadrat == c_quadrat) return true;
    else return false;
}

int main(){

    int x;

    int i = 0, j = 0, k = 0, total = 0;
    while(cin >> x){

        if ((x != 0) and (i == 0)) i = x;
        else if ((x != 0) and (j == 0)) j = x;
        else if ((x != 0) and (k == 0)){

            k = x;
            if (es_triangle_rectangle(i, j, k)) ++total;
            else if (es_triangle_rectangle(i, k, j)) ++total;
            else if (es_triangle_rectangle(j, i, k)) ++total;
            else if (es_triangle_rectangle(j, k, i)) ++total;
            else if (es_triangle_rectangle(k, i, j)) ++total;
            else if (es_triangle_rectangle(k, j, i)) ++total;
            i = j;
            j = k;
            k = 0;
        }
    }
    cout << total << endl;
}


