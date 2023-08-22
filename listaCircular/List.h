#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <iostream>

/**
 * CLasse que implementa uma lista duplamente encadeada circular
 * 
*/
class List{
private:
    Node *m_head; //ponteiro p no sentinela
    size_t m_size; // numero de elementos da lista
public:
    //cria uma lista vazia
    List(){
        m_head = new Node(0, nullptr, nullptr);
        m_head -> next = m_head;
        m_head -> prev = m_head;
        m_size = 0;
    }
    //cria um copia da lista dada
    List(const List& list){

    }
};

#endif