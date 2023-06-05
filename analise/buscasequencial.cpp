#include <iostream>
using namespace std;

int buscaSequencial(int v[], int n, int x)
{

    for (int i = 0; i < n; i++){
        if (v[i] == x)
        {
            return i;
        }

        
    }
    return -1;
}

int main()
{

    int v[] = {10, 12, 14, 16, 18};
    int tamanho = 5;
    int numBuscado = 12;

    int i = buscaSequencial(v, tamanho, numBuscado);

    if (i == -1)
    {
        cout << "O número " << numBuscado << " não encontrado na busca sequencial" << endl;
    }
    else
    {
        cout << "O número " << numBuscado << " foi encontrado na posição " << i << " do vetor" << endl;
    }
    return 0;
}
