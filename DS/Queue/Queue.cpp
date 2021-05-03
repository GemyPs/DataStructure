#include "Queue.h"

template<typename var>
void Queue<var>::push_back(int value){
    Node *newElement = new Node;
    newElement->data = value;
    newElement->Link = NULL;

    if(NumOfElements == 0){ First = Last = newElement;}  //First & Last pointer refers to the same element (First element);
    else{   
        newElement->Link = Last;    // NewElement pointer refers to the Last elemtent in;
        Last = newElement;  // Then we move the Last element pointer to refer to the new last element;
    }
    newElement = NULL;  // so we can delete the pointer without deleting the new last element that is refers to;
    delete(newElement);
    ++NumOfElements;
}

template<typename var>
void Queue<var>::pop_front(){
    if(NumOfElements == 0)  cout << "Error!\n Queue is already empty.";
    Node *LastElement = new Node;
    Node *pre = new Node;

    LastElement = First;    // To make the LastElement pointer refers to the first element in (that we want to pop);
    pre = Last; 
    for(int i = 1; i < NumOfElements; ++i){ // To know what is the previous element of the first element in;
        pre = pre->Link;
    }   
    First = pre;    // To make the previous element be the first element in the queue;
    delete(LastElement);
    delete(pre);
}

template<typename var>
int Queue<var>::front(){
    return First->data;
}

template<typename var>
int Queue<var>::back(){
    return Last->data;
}

template<typename var>
int Queue<var>::size(){
    return NumOfElements;
}

template<typename var>
bool Queue<var>::empty(){
    return (NumOfElements == 0);
}