#include "Stack.h"

template<typename T>
void Stack<T>::push(int value){ 
    Node *holder = new Node;
    holder -> data = value;
    holder -> link = NULL;
    
    if(NodesCounter == 0){head = tail = holder;}
    else{
        tail -> link = holder;
        tail = holder;
    }
    ++NodesCounter;
    holder = NULL;
    delete (holder);
}

template<typename T>
void Stack<T>::pop(){
    Node *cur = new Node;
    Node *pre = new Node;

    cur = tail;
    pre = head;
    for(int i = 1; i < NodesCounter-1; ++i){
        pre = pre->link;
    }

    tail = pre;
    tail->link = NULL;
    delete(cur);
}

template<typename T>
void Stack<T>::top(){
    cout << tail->data;
}
