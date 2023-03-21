#include <iostream>
#include <string>
using namespace std;

#define endl "\n";

int main(){

    string id, nome;
    for(int i = 1; i <= 2; i++){

        cout << "Digite seu ID: ";
        cin >> id;
        cin.ignore(); // vai olhar e ignorar o \n se usamos cin e dps getline
        
        cout << "Digite seu nome completo";
        getline(cin, nome);

        cout << "nome: " << nome << ", ID: " << id;

    }
    return 0;
}

/*

    

*/