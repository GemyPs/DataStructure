#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *Link;
};

template <typename var> class Queue{
    
private:
    Node *First, *Last;
    int NumOfElements;
    
public:
    Queue(){
        First = Last = NULL;
        NumOfElements = 0;
    }
    void push_back(int value);
    int size();
    bool empty();
    void pop_front();
    int front();
    int back();
};