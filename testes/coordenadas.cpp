#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* Crie uma estrutura para representar as coordenadas de um ponto no plano
(posic ̧ ̃oes X e Y). Em seguida, declare e leia do teclado um ponto e exiba
a distˆancia dele at ́e a origem das coordenadas, isto  ́e, a posição (0,0).*/
struct Coordenada {
    float y;
    float x;
};

float distancia(Coordenada p, Coordenada q){

    double dist = sqrt(((pow (q.x - p.x, 2)) + (pow (q.y - p.y, 2))));

    return dist;
}
int main(){

    Coordenada ponto;
    Coordenada origem {0.0};

    cout << "Digite as coordenadas: " << endl;
    cin >> ponto.x >>  ponto.y;

    cout << "A distância de seu ponto para origem é: "
         << fixed << setprecision(2) 
         << distancia(ponto, origem) << endl;

    return 0;

}