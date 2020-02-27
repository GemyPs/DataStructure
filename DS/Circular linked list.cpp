//
// Created by ahmed on 2/27/20.
//
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int Data;
    Node *Link;
};

class CSLL{
    Node *head, *tail;
public:
    CSLL(){
        head = tail = NULL;
    }

    void CreateNode(int value){
        Node *temp = new Node;
        temp ->Data = value;
        if(head == NULL){
            head = tail = temp;
            temp->Link = head;
            temp = NULL;
        }else{
            tail->Link = temp;
            tail = temp;
            temp->Link = head;
        }
    }

    void InsertStart(int Value){
        Node *temp = new Node, *end = head;
        temp->Data = Value;
        temp->Link = head;
        head = temp;
        Node *cur = head->Link;

        //cout << end->Data << " " << head->Data << endl;
        while(cur ->Link != end)   cur = cur->Link;
        cur->Link = head;
    }

    void InsertPos(int pos, int value){
        Node *temp = new Node, *pre = new Node, *cur = new Node;
        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->Link;
        }
        temp->Data = value;
        pre ->Link = temp;
        temp ->Link = cur;
    }

    void DeleteFirst(){
        Node *temp = new Node, *newStart = new Node;
        newStart = head;
        temp = head;
        head = head ->Link;
        delete(temp);
        tail->Link = head;
    }

    void DeleteLast(){
        Node *pre = new Node, *cur = new Node;
        cur = head;
        while(cur->Link != head){
            pre = cur;
            cur = cur->Link;
        }
        tail = pre;
        pre->Link = head;
        delete(cur);
    }

    void DeletePos(int pos){
        Node *cur = new Node, *pre = new Node;
        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->Link;
        }
        pre ->Link = cur->Link;
    }

    void Display(){
        Node *temp = new Node;
        temp = head;
        while(1){
            cout << temp->Data << endl;
            temp = temp->Link;
            if(temp == head) break;
        }
    }
};
int main() {

    return 0;
}
