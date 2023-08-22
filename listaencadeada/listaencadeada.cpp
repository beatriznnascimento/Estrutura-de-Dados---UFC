#include <iostream>

// objeto/elemento alocado dinamicamente que contem o dado armazenado
// um ponteiro para o no seguinte na lista 
struct Node{ 
    int value; // valor armaze
    Node* next; // ponteiro p o proximo no (obj/elem)
    Node* previous; // ponteiro p o no anterior (obj/elem)

    // construtor 
    Node(int value{0}, Node* next{nullptr}, Node* previous{nullptr}){ 
        value = value;
        next = next;
        previous = previous;
    }
};
// cria a lista encadeada
struct DList{
    Node* head; //  no sentinela q referencia primeiro elem da lista
    Node* tail; // no sentinela q referencia ultimo elem da lista

    //cria uma lista vazia
    DList(){
        head = new Node(0); // head aponta p um objeto Node que possui next e prev como atbt
        tail = new Node(0);
        head->next = tail; 
        tail->previous = head;
    }    
    // verifica se lista esta vazia
    // a lista é vazia se o head->next == tail,
    // que significa que se o ponteiro de head q aponta p proximo ja aponta pra tail
    bool empty(){
        return head->next == tail;
    }
    void push_front(int value){
        Node* node = new Node(value); // cria 
        
        node->next = head->next;
        node->next->previous = node;
        head->next = node;
        node->previous = head;
    }

    
};
