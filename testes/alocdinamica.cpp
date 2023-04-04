#include <iostream>
using namespace std;

void preencheArray(int *A, int n){ // recebe o array e o tamanho dele

   for (int i = 0; i < n; i++) { // preenche o array
        cout << "Digite o elemento " << i << ": "; // pede o elemento
        cin >> A[i]; // recebe o elemento
   }
}

void imprimeArray(int *A, int n){ // recebe o array e o tamanho dele

     for (int i = 0; i < n; i++) { // percorre o array
        cout << A[i] << " "; // imprime o elemento
    }

    cout << endl; // pula linha
}

int main() {

    int n; // tamanho do array
    cout << "Digite o tamanho do array: "; //   pede o tamanho do array
    cin >> n; // recebe o tamanho do array
    int *A = new int[n]; // aloca o array
    preencheArray(A, n); // preenche o array
    imprimeArray(A, n); //  imprime o array
    delete[] A; // libera o array
    
    return 0;

}
