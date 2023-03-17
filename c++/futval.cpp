#include <iostream>
#include <cmath>
using namespace std;

float futval(double p){

    double b = 1000 * pow(1+p/100, 10);
    return b;
}
int main(){

    cout << "Por favor, forneça a taxa percentual de juros: ";

    double rate;
    cin >> rate;

    double balance = futval(rate);

    cout << "Após 10 anos, o saldo é: " << balance << endl;


return 0;
}