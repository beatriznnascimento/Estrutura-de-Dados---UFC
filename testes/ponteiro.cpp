#include <iostream>
using namespace std;

int main(){
    int x {32};
    int *ptr { &x }; // declara um pont valor apontado

    cout << x << endl; //32
    cout << *ptr << endl; //32
    cout << ptr << endl; // endereço de x

    int y {666};
    ptr = &y; 

    cout << y << endl; // 666
    cout << *ptr << endl; // 666
  
    *ptr = 10; // alterando y sem modificá-lo diretamente, ou seja, o ponteiro o modifica indiretamente

    return 0;
}
// escreve uma função que troca o valor de 2 variaveis

