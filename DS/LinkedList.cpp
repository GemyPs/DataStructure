#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e3+10, OO = 0x3f3f3f3f;

struct Node{
    int data;
    Node *Link;
};

class LinkedList{
    Node *head, *tail;
public:
    LinkedList(){
        head = tail = NULL;
    }

    void CreateNode(int value){

        Node *temp = new Node;
        temp->data = value;
        temp->Link = NULL;

        if(head == NULL){
            tail = head = temp;
        }
        else{
            tail->Link = temp;
            tail = temp;
        }
    }

    void InsertStart(int value){
        Node *temp = new Node;
        temp->data = value;
        temp->Link = head;
        head = temp;
    }

    void InsertPos(int pos, int value){
        Node *pre = new Node;
        Node *cur = new Node;
        Node *temp = new Node;

        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->Link;
        }
        temp->data = value;

        temp->Link = cur;
        pre->Link = temp;
    }

    void DeleteFirst(){
        Node *temp = new Node;
        temp = head;
        head = head->Link;
        delete(temp);
    }

    void DeleteEnd(){
        Node *pre = new Node;
        Node *cur = new Node;

        cur = head;
        while(cur->Link != NULL){
            pre = cur;
            cur = cur->Link;
        }
        tail = pre;
        tail->Link = NULL;   //pre -> Link = NULL
        delete(cur);
    }

    void DeletePos(int pos){
        Node *cur = new Node;
        Node *pre = new Node;

        cur = head;
        for(int i = 1 ; i < pos ; ++i){
            pre = cur;
            cur = cur->Link;
        }
        pre->Link = cur->Link;
        delete(cur);
    }
    void Display(){
        Node *temp = new Node;
        temp = head;
        while(temp != NULL){
            cout << temp->data << "   " << temp->Link << endl;
            temp = temp->Link;
        }
    }
};

int main() {
    LinkedList l;

    l.CreateNode(20);
    l.CreateNode(30);
    l.CreateNode(40);
    l.InsertStart(10);
    l.InsertPos(2, 100);
    l.DeletePos(2);
    l.DeleteFirst();
    l.DeleteEnd();

    l.Display();
    return 0;
}
