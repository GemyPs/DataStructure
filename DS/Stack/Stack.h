#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

template<typename T> class Stack{

private:
    Node *head, *tail;
    int NodesCounter;
    bool isEmpty;

public:
    Stack(){
        head = tail = NULL;
        NodesCounter = 0;
        isEmpty = 0;
    }
    void push(int value);
    void pop();
    int top();
    bool empty();
    int size();
};