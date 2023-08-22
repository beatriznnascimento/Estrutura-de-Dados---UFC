#ifndef NODE_H
#define NODE_H

struct Node { 
    int value; // valor armazenado
    Node* next; // ponteiro para o próximo nó (objeto/elemento)
    Node* previous; // ponteiro para o nó anterior (objeto/elemento)

    // construtor 
    Node(int value, Node* next, Node* previous) { 
        this->value = value;
        this->next = next;
        this->previous = previous;
    }
};

#endif
