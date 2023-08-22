#ifndef NODE_H
#define NODE_H

template <typename T> // definindo um tipo generico
struct Node{
    T value;    // valor a ser guardado
    Node *next; // ponteiro p o proximo da fila

    Node(const T &val, Node *nextPtr){
        value = val;
        next = nextPtr;
    }
    ~Node(){
        delete next; // deleta o nó e o proximo
    }
};

#endif;