#include <iostream>
using namespace std;

int main()
{

    int quadrado[3][3]; // dimensão da matriz
    int somas = 0, cont = 0;

    for (int i = 0; i < 3; i++) // recebe linhas e colunas da matriz
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> quadrado[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        somas += quadrado[i][0];
    }
    cont = somas;

    for (int i = 0; i < 3; i++)
    {

        somas = 0;

        for (int j = 0; j < 3; j++)
        {
            somas += quadrado[i][j];
        }
        if (somas != cont)
        {
            cout << "nao" << endl;
            return 0;
        }
    }
    cout << "sim" << endl;

    return 0;
}
