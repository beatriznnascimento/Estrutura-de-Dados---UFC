#include <iostream>
#include <string>

using namespace std;

int main()
{

    string frase;
    getline(cin, frase);
    char tipoForm;
    cin >> tipoForm;

    for (int i = 0; i < frase.size(); i++)
    { // vai iterar de acordo com o tamanho da string

        if (frase[i] >= 'a' && frase[i] <= 'z' && tipoForm == 'M')
        { // se minuscula, transforma em maiuscula
            frase[i] -= 32;
        }
        else if (frase[i] >= 'A' && frase[i] <= 'Z' && tipoForm == 'm')
        { // maiuscula, transforma em min
            frase[i] += 32;
        }
        else if (tipoForm == 'i')
        {
            if (frase[i] >= 'a' && frase[i] <= 'z')
            {
                frase[i] -= 32;
            }
            else if (frase[i] >= 'A' && frase[i] <= 'Z')
            {
                frase[i] += 32;
            }
        }
        else if (tipoForm == 'p')
        {
            if (i == 0 && frase[i + 1] == ' ')
                frase[i] += 32;
            if (frase[i - 1] == ' ' && frase[i + 1] != ' ')
                if (frase[i] >= 'a' && frase[i] <= 'z')
                    frase[i] -= 32;
        }

        cout << frase[i];
    }
}
