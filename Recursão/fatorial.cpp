#include <iostream>
using namespace std;

// retorna o fatorial de um inteiro n não negativo
int fatorial(int n){
 
    if(n == 0) // caso base 
        return 1;
    else 
        return fatorial(n-1)*n; // caso geral
}
int main(){

    int num;
    cin >> num;

    cout << fatorial(num);
    

    return 0;
}

