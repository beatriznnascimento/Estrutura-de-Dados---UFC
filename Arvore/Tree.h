#ifndef TREE.H
#define TREE.H
#include "Node.h"

class Tree{
private:

    Node *root {nullptr}; // ponteiro p a raiz da árvore

public:
    //construtor default: cria arvore vazia
    Tree() = default; //raiz aponta p nulo
    // construtor 2: cria uma arvore a partir de outras duas
    Tree(const int& key, Tree& tleft, Tree& tright){
        root = new Node(key, tleft, tright);
        tleft.root = nullptr;
        tright.root = nullptr;
    }
};
#endif