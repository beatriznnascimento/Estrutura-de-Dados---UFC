#include <iostream>
using namespace std;

int main()
{

    int nl, nc;
    int cont = 0;
    cin >> nl >> nc;

    int formacao[nl][nc]; // as linhas e colunas da matriz sao determinadas em tempo de execução

    for (int i = 0; i < nl; i++)
    {

        for (int j = 0; j < nc; j++)
        {
            cin >> formacao[i][j];
        }
    }
    for (int i = 0; i < nl - 1; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (formacao[i][j] > formacao[i + 1][j])
            {
                cont++;
            }
        }
       
    }
     cout << cont << endl;
}
