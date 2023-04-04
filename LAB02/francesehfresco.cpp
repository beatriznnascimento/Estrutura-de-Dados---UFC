#include <iostream>
#include <string>

using namespace std;

bool vogal(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true; // se for vogal retorna true
    }
    return false; // se não for vogal retorna false
}

int main()
{
    int aux;
    string frase; 
    getline(cin, frase);

    for (int i = 0; i < frase.size(); i++) // percorre a frase
    {
        aux = 0; // zera o auxiliar
        cout << frase[i]; // imprime o caractere

        for (int j = i + 1; j < frase.size(); j++) // percorre a frase a partir do caractere atual
        {
            if (frase[j] == frase[i] && vogal(frase[j]) || frase[j] == ' ') // se o caractere for igual ao atual e for vogal ou espaço
            {
                aux++; // incrementa o auxiliar
            }
            else
            {
                break; // se não for vogal ou espaço, sai do loop
            }
            {
                aux++; // incrementa o auxiliar
            }
            else // se não for vogal ou espaço, sai do loop
            {
                break;
            }
        }
        if (aux >= 2) // se o auxiliar for maior ou igual a 2
        {
            i += aux; // incrementa o i com o auxiliar
        }
    }

    return 0; 
}