#include<iostream>
#include<vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    int x = es.size();
    int num = 0;
    min = 10;
    max = 0;
    mitj = 0;
    for (int i = 0; i < x; ++i) {
        if (not es[i].repetidor and es[i].nota != -1) {
            if (es[i].nota > max) max = es[i].nota;
            if (es[i].nota < min) min = es[i].nota;
            mitj += es[i].nota;
            ++num;
        }
    }
    if (num != 0) mitj /= num;
    else {
        mitj = -1;
        min = -1;
        max = -1;
    }
}

int main() {

}

