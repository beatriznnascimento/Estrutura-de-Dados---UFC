#include <iostream>
#include "pessoa.h"
#include <string>
using namespace std;

// funcao que recebe uma pessoa e imprime seus dados, passando
// parametros por referencia

void print_pessoa(Pessoa &p)
{ // se vc n quiser uma cópia de dados, utilize pont ou ref

    cout << p.getIdade() << " "
         << p.getNome() << " "
         << p.getAltura() << endl;
}
int main()
{
    Pessoa p1;
    Pessoa p2(2);
    Pessoa p4(2.0);
    Pessoa pedro(25, "PEdro", 2.0);

    // criando uma pessoa dinamicamente
    Pessoa *ptr = new Pessoa(25, "Bi", 1.65); // se vc criou adc o new, vc tem que deletar

    print_pessoa(pedro);
    print_pessoa(p1);
    print_pessoa(p2);
    print_pessoa(p4);
    print_pessoa(*ptr);

    delete ptr;
}
