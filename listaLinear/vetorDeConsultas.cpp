/*Há um vetor de strings de entrada e um vetor de strings de consulta. Para cada sequência de consultas, determine quantas vezes ela ocorre na lista de sequências de entrada.

Por exemplo, dado o vetor entrada = [‘ab’,‘ab’,‘abc’ ] e o vetor consultas = [‘ab’,‘abc’,‘bc’], encontramos duas instâncias de ‘ab’ , uma instância de ‘abc’ e zero instâncias de ‘bc’. Para cada consulta, adicionamos um elemento ao nosso vetor de retorno.

Descrição da função

Implemente a função matchingStrings. A função deve retornar um vetor de números inteiros representando a frequência de ocorrência de cada sequência de consultas.

matchingStrings possui os seguintes parâmetros:

    strings - um vetor de strings para pesquisar
    consultas - um vetor de cadeias de consulta

Formato de entrada

    Linha 1: tamanho do vetor de consultas
    Linha 2: vetor de consultas
    Linha 3: tamanho do vetor de buscas
    Linha 4: vetor de buscas

Formato de saída

Retorne um vetor inteiro dos resultados de todas as consultas em ordem.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;
    int count = 0;
    for(int i = 0; i < queries.size(); i++){
        for(int j = 0; j < strings.size(); j++){
            if(queries[i] == strings[j]){
                count++;
            }
        }
        result.push_back(count);
        count = 0;
    }
    return result;
}

int main(){
    int n, q;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }
    cin >> q;
    vector<string> queries(q);
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }
    vector<int> result = matchingStrings(strings, queries);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}