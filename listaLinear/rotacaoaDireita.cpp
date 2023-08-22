#include <iostream>
#include <vector>
using namespace std;

void right_rotation(vector<int>& vet, int nrot){   // função para rotacionar o vetor para a direita
    int size = vet.size(); // tamanho do vetor
    vector<int> aux(size); // vetor auxiliar para armazenar os elementos após a rotação
    for(int i = 0; i < size; i++){ 
        aux[(i + nrot) % size] = vet[i]; // calcula a posição do elemento após a rotação
    }
    vet = aux; // copia o vetor auxiliar para o vetor original

}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, nrot);
    show(vet);
}

