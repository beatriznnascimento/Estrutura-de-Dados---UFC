#include <iostream>
using namespace std;


// funcao que retorna a exponenciacao a^b
float exp(float a, unsigned int b){
    if(b == 0) // caso base
        return 1;
    else{
        float resultado = exp(a, b - 1);
        return a * resultado;
    }
}
int main(){

    

    return 0;
}

