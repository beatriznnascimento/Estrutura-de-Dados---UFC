#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno
{
    int matricula;
    string nome;
    float media;
};

int main()
{
    int n, m; // n de alunos no vetor
    bool aux = false;
    cin >> n;
    Aluno vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i].matricula;
        cin.ignore();
        getline(cin, vetor[i].nome);
        cin >> vetor[i].media;
    }
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i].matricula == m)
        {
            cout << vetor[i].nome << endl
                 << fixed << setprecision(1)
                 << vetor[i].media;
            aux = true;
            break;
        }
    }
    if (aux == false)
        cout << "NAO ENCONTRADA";
    return 0;
}
