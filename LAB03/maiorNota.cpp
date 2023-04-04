#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

int main(){
    Aluno aluno[2];

    for(int i = 0; i < 2; i++){
    cin >> aluno[i].nome;
    cin >> aluno[i].matricula;
    cin >> aluno[i].disciplina;
    cin >> aluno[i].nota;

    }
    if(aluno[0].nota > aluno[1].nota)
        cout << aluno[0].nome << " , " << fixed << setprecision(1) << aluno[0].nota;
    else if(aluno[1].nota > aluno[0].nota)
        cout << aluno[1].nome << " , " << fixed << setprecision(1) << aluno[1].nota ;
    else if(aluno[0].nota == aluno[1].nota)
        cout << aluno[0].nome << " e " << aluno[1].nome << " , " << fixed << setprecision(1) << aluno[1].nota;

    return 0;
}
