#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

int main(){
    Aluno aluno;

    cin >> aluno.nome;
    cin >> aluno.matricula;
    cin >> aluno.disciplina;
    cin >> aluno.nota;

    if(aluno.nota >= 7)
        cout << aluno.nome << " aprovado(a) em " << aluno.disciplina;
    else
        cout << aluno.nome << " reprovado(a) em " << aluno.disciplina;
    
    return 0;
}
