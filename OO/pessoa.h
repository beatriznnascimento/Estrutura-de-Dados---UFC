#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa{
private:

    int idade;
    float altura;
    std::string nome; // lembrar de nao colocar usign namespace

public:
    int getIdade(){ // funcao que acessa a idade e a retorna
        return idade;
    }
    std::string getNome(){
        return nome;
    }
    float getAltura(){
        return altura;
    }
    // funcao que altera a idade da pessoa
    void set_idade(int idade){
        this -> idade = idade;
    }
    //funcao que altera nome da pessoa
    void set_nome(std::string nome){
        this -> nome = nome;
    }
    // funcao que altera altura da pessoa
    void set_altura(float altura){
        this -> altura = altura;
    }
    public:
//criando um construtor
    Pessoa(int i = 15, std::string n = "BIA", float a = 1.65){
        idade = i;
        nome = n;
        altura = a;
    }
    //criando um destrutor
    ~Pessoa(){
        std::cout << nome << "morreu \n";
    }
};



#endif