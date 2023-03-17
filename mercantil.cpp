#include <iostream>
#include <cmath>
using namespace std;

int main(){

int vChute, chute1, chute2;

cin >> vChute >> chute1 >> chute2;

    if(fabs(vChute - chute1) > fabs(vChute - chute2)){
        cout << "segundo";
    }
    else if(fabs(vChute - chute1) < fabs(vChute - chute2)){
        cout << "primeiro";
    }
    else{
        cout << "empate";
    }
}