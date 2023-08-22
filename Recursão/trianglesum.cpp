/*
Dado um vetor com n inteiros A=[a0,a1,…,an−1], n≥0

, imprima um triângulo de números tal que:

    na base do triângulo estejam todos os elementos do vetor original, ou seja: [a0,a1,…,an−1]

    ;
    o número de elementos em cada nível acima da base é um a menos que no nível inferior;
    e cada elemento no i-ésimo nível é a soma de dois elementos consecutivos do nível inferior.

Entrada:
A primeira linha deve ler o tamanho n
do vetor A. O valor de n
é maior ou igual a zero.
A segunda linha deve ler os n
elementos do vetor, separados por espaço simples.
Saída:
O triângulo de somas.
*/
#include <iostream>
#include <cmath>
using namespace std;

void triangulo(int A[], int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        triangulo(A, n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cout << A[i] + A[i + 1] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    triangulo(A, n);
}



