#include<iostream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.precision(2);

    int any;
    double emisions;
    string area;

    cin >> any >> emisions >> area;

    if(area == "making_things"){

        emisions = (31*emisions)/100;
        cout << "Making things produced " << emisions << " CO2 Gt in " << any << endl;
    } else if(area == "pluggin_in"){

        emisions = (27*emisions)/100;
        cout << "Pluggin in produced " << emisions << " CO2 Gt in " << any << endl;
    } else if(area == "growing_things"){

        emisions = (19*emisions)/100;
        cout << "Growing things produced " << emisions << " CO2 Gt in " << any << endl;
    } else if(area == "getting_around"){

        emisions = (16*emisions)/100;
        cout << "Getting around produced " << emisions << " CO2 Gt in " << any << endl;
    } else if(area == "keeping_warm_and_cold"){

        emisions = (7*emisions)/100;
        cout << "Keeping wamr and cold produced " << emisions << " CO2 Gt in " << any << endl;
    }
}
