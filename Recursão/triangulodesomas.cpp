/*
Dado um vetor com n inteiros A=[a0,a1,…,an−1], n≥0

, imprima um triângulo de números tal que:

    na base do triângulo estejam todos os elementos do vetor original, ou seja: [a0,a1,…,an−1]

    ;
    o número de elementos em cada nível acima da base é um a menos que no nível inferior;
    e cada elemento no i-ésimo nível é a soma de dois elementos consecutivos do nível inferior.


Use recursão para resolver este problema
*/

#include <iostream>
#include <vector>
using namespace std;

void triangulo(vector<int> &A, int n)
{
    if (n == 1)
    {
        cout << A[0] << endl;
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


