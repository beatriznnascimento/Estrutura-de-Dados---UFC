#include <iostream>
#include <stdexcept>
#include "Vector.h"
using namespace std;

Vector::Vector() { // dizendo a qual classe essa lista pertence, aloca uma lista
    m_list = new int[16]; // cria um array de 16 elementos inteiros, constructor default, se usou new pra alocar memoria, tem que desalocar a mem
    m_capacity = 16;
}

Vector::Vector(const Vector& v) { // construtor de cópia, vai copiar os elementos de uma lista para outra
    m_capacity = v.m_capacity; // acessando com ponto pq ta usando uma referencia e naoum ponteiro
    m_size = v.m_size; // size sai de 0 para 3
    m_list = new int[m_capacity]; // deixa de apontar para nulo e passar a apontar para um array de 100 elementos
    
    for(int i = 0; i < m_size; i++){
        m_list[i] = v.m_list [i]; // copia os elemtos de cada indice de v para a m_list
    }
}
//destrutor
Vector::~Vector(){
    delete[] m_list; // desalocando a memória da lista tem complexidade O(1)
}
int Vector::capacity() const { // retorna a capacidade atual da lista, e por ser const, nao altera nenhum dos atributos da lista
    return m_capacity;
}
int Vector::size() const{ // returna o tamanho da lista
    return m_size;
}
bool Vector::empty() const { // retorna true <-> a lista estiver vazia
    return m_list == nullptr;
}
int& Vector::operator[](int index){ // retorna uma referencia para o elemnto na posicao k, mas nao verifca se o indice é valido
    if(index >= 0 && index < size())
        return m_list[index]; // 
    else 
        throw runtime_error("err0: indice invalido"); // lancando uma excecao
}
int& Vector::at(int k){ // retorna uma referencia para o elemnto na posicao k, mas nao verifca se o indice é valido
    if(k >= 0 && k < size())
        return m_list[k]; // 
    else 
        throw out_of_range("err0: indice invalido"); // lancando uma excecao
}
// Recebe um inteiro como argumento e o adiciona
// logo apos o ultimo elemento da lista. 
void Vector::push_back(const int& value){
    if(m_size < m_capacity){
        m_list[m_size] = value; // size da o n de elemtnos no vetor e o ultimo
        m_size++; // m_size tem um elemnto a mais, passando de 0 elementos para 1 elemento
    }

}
