#include <iostream>
using namespace std;

void troca(int *a, int *b){

    int aux = *a; // pq guarda o valor que o ponteiro aponta
    *a = *b; // guarda o valor apontado
    *b = aux;

}
int main(){
    
    int x{1}, y{2};
    cout << "Valor de x: \n" << x << " \n Valor de y: \n" << y;

    troca( &x, &y );
    cout << "Valor de x: \n" << x << "Valor de y: \n" << y;



    return 0;
}

