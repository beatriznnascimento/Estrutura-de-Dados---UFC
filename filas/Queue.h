#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <stdexcept>
#include "Node.h"

/**
 * Classe que implementa uma fila FIFO (First in, first out)
 */
template <typename T> // fila do tipo T
// criando a fila
class Queue
{
private:
    // tipo do no é o mesmo tipo da fila,
    Node<T> *m_head; //  aponta pro primeiro elemento da fila
    Node<T> *m_tail; // aponta pro ultimo
    int m_size;      // na fila tem que guardar o n de elementos

    // construtor default: cria fila vazia
    Queue();

    // insere elementos na fila
    void push(const T &v);

    // remove um elemento da fila
    void pop();

    // acessa o primeiro elemento da fila
    //  se fila vazia, lance uma out_of_range exception
    T &front();

    // acessa o ultimo elemento da fila
    //  se fila vazia, lance uma out_of_range exception
    T &back();

    // retorna o numero de elemntos na fila
    int size();

    // construtor de copia
    Queue(const Queue &q);

    // sobrecarga do operador de atribuicao
    Queue &operator=(const Queue &q);

    // sobrecarga do operador =
    bool operator==(const Queue &q);
};
template <typename T>
// criando fila vazia
Queue<T>::Queue()
{
    m_head = m_tail = nullptr;
    m_size = 0;
}
// insere elemento na fila
template <typename T>
Node<T> *aux = new Node();
Queue<T>::push(const T &v)
{
    if (m_size == 0){
        m_head = m_tail = aux;
    }
    else{
        m_tail->next = aux;
        m_tail = aux;
    }
    m_size++;
}
template <typename T>
void Queue<T>::pop(){

    if(m_size == 0){
        return; // se n tiver elementos, sai sem fzer nd
    }
    // ha pelo menos um elemento
    Node<T> *aux = m_head;
    m_head = m_head -> next; 
    delete aux;
    m_size--;

    if(m_head == nullptr){
        m_tail = nullptr;
    }
template <typename T>

}
#endif