#include <iostream>
#include <string>
#include "Node.h"
#include "CircularList.h"

// Construtor: cria uma lista circular 
// vazia com node sentinela
CircularList::CircularList() {
    //Node *aux = new Node(-1, nullptr);
    //aux->next = aux;
    //m_head = aux;
    m_head = new Node(-1, nullptr);
    m_head->next = m_head;
}

// retorna se a lista esta vazia
bool CircularList::empty() const {
    /*if(m_head->next == m_head) {
        return true;
    }
    else {
        return false;
    }*/
    return m_head->next == m_head;
}

// adiciona um elemento ao final da lista
void CircularList::push_back(const int& val) {
    Node *aux = m_head;
    while(aux->next != m_head) {
        aux = aux->next;
    }
    aux->next = new Node(val, m_head);
    m_size++;
}

// remove um elemento do final da lista, se ele existir
// caso contrario, nao faz nada
void CircularList::pop_back() {
    if(m_head->next != m_head) {
        Node *aux = m_head;
        while(aux->next->next != m_head) {
            aux = aux->next;
        }
        delete aux->next;
        aux->next = m_head;
        m_size--;
    }
}

// sobrecarga do operador[] 
// possibilita acessar diretamente o elemento no indice 'index'
int& CircularList::operator[](int index) {
    if( index >= 0 && index <= m_size-1) {
        int contador{0};
        Node *aux = m_head->next;
        while(contador < index) {
            aux = aux->next;
            contador++;
        }
        return aux->value;	
    }
    else {
        throw std::out_of_range("fora do intervalo");
    }
}

