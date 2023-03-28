#include <iostream>
using namespace std;

struct Ponto{
    float p1;
    float p2;
};

void dobra(Ponto *point){

    point -> p1 = point -> p1 * 2;
}
void troca(Ponto *p1, Ponto *p2){

    Ponto aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
int main(){

    Ponto valor { 2, 3 };

    
    return 0;
}
