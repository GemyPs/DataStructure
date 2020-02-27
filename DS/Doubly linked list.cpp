//
// Created by ahmed on 2/26/20.
//
#include <iostream>
using namespace std;

struct Node{
    int Data;
    Node *prev;
    Node *Next;
};

class DLL{
    Node *head, *tail;
public:
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void CreateNode(int value){

        Node *temp = new Node;

        temp->Data = value;
        temp->Next = temp->prev = NULL;

        if(head == NULL){
            tail = head = temp;
            temp = NULL;
        }
        else{
            temp->prev = tail;
            tail->Next = temp;
            tail = temp;
        }
    }

    void InsertFront(int value){
        Node *temp = new Node;
        temp->Data = value;
        temp->prev = NULL;
        temp->Next = head;
        head->prev = temp;
        head = temp;
    }

    void InsertPos(int pos, int value){
        Node *temp = new Node, *pre = new Node, *cur = new Node;
        temp->Data = value;
        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->Next;
        }
        temp ->prev = pre;
        temp ->Next = cur;
        pre->Next = temp;
        cur->prev = temp;
    }

    void DeleteFirst(){
        Node *temp = new Node;
        temp = head;
        head = head->Next;
        head->prev = NULL;
        delete(temp);
    }

    void DeleteLast(){
        Node *temp = new Node;
        temp = tail;
        tail = tail->prev;
        tail->Next = NULL;
        delete(temp);
    }

    void DeletePos(int Pos){
        Node *cur = new Node, *pre = new Node;
        cur = head;
        for(int i = 1 ; i < Pos ; ++i){
            pre = cur;
            cur = cur->Next;
        }
        pre->Next = cur->Next;
        delete(cur);
        cur = pre->Next;
        cur->prev = pre;
    }

    void DisplayF(){
        Node *temp = new Node;
        temp = head;

        while(temp!=NULL){
            cout << temp->Data << endl;
            temp = temp->Next;
        }
    }

    void DisplayR(){
        Node *temp = new Node;
        temp = tail;

        while(temp != NULL){
            cout << temp->Data << endl;
            temp = temp->prev;
        }
    }

};
int main() {

    DLL l;
    l.CreateNode(15);
    l.CreateNode(20);
    l.CreateNode(25);
    l.InsertFront(1);
    l.InsertPos(3, 100);
    l.DeletePos(3);
    //l.DisplayF();
    l.DisplayR();
    return 0;
}
