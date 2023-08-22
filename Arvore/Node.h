#ifndef NODE.H
#define NODE.H

struct Node{

    int key;    //chave
    Node* left; //
    Node* right;

    //construtor
    Node(const int& key, Node *left, Node *right){
        this->key = key;
        this->left = left;
        this->right = right;
    }

};

#endif