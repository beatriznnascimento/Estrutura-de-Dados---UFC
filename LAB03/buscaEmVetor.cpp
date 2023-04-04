#include <iostream>
using namespace std;

struct Aluno{

    int matricula;
    string nome;
    float media;
};

int main(){
    int n; // n de alunos no vetor
    cin >> n;
    int vetor[n];

    Aluno aluno;

    for (int i = 0; i < n; i++){
    
    cin >> vetor[i];
    
    
    }
    return 0;
}
