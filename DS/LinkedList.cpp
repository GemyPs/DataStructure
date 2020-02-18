//
// Created by AhmedGamal on 2/16/20.
//
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

struct Node{
    int data;
    Node *link;
};

class LinkedList{
private:
    Node *head, *tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void makeNode(int val){
        Node *temp = new Node;
        temp->data = val;
        temp->link = NULL;

        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }else{
            tail ->link = temp;
            tail = temp;
        }
    }

    void Display(){
        Node *temp = new Node;
        temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->link;
        }
    }

    void inserInStart(int value){
        Node *temp = new Node;
        temp->data = value;
        temp->link = head;
        head = temp;
    }

    void InsertPosition(int pos, int val){
        Node *cur = new Node;
        Node *pre = new Node;
        Node *temp = new Node;

        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->link;
        }

        temp->data = val;
        pre->link = temp;
        temp->link = cur;
    }
};

int main() {

    return 0;
}

