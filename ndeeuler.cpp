#include <iostream>
#include <iomanip>
using namespace std;

 double fat(int n){

    double resul = 1;
    
    for(int i = 1; i <= n; i++){

        resul *= i;
    }
    return resul;
 }

double euler(int n){

    double resul2 = 1;

    for(int i = 1; i <= n; i++){

        resul2 += 1/fat(i);

    }
    return resul2;
}
int main(){

    int m;
    cin >> m;

    cout << fixed << setprecision(6) << euler(m);
}



