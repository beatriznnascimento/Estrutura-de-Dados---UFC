/*Forneça um algoritmo recursivo para contar
quantas vezes um determinado caractere ocorre em uma string. Não é permitido usar comandos de repetição nesta função.*/

#include <iostream>
#include <string>

using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c)
{
    if (n - 1 < 0)
        return 0;
    else
    {
        if (c == str[n - 1])
            return 1 + contaCaracteres(str, n - 1, c);

        else
            return contaCaracteres(str, n - 1, c);
    }
}

int main()
{
    string str;
    char c;
    getline(cin, str);
    cin >> c;
    cout << contaCaracteres(str, str.size(), c) << endl;
}