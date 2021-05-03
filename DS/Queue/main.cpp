#include<bits/stdc++.h>
#include "Queue.cpp"

using namespace std;
int main(){
    Queue<int> q;
    q.push_back(5);
    q.push_back(6);
    q.push_back(7);

    cout << q.front() << endl;
    q.pop_front();
    cout << q.front() << endl;

    cout << q.back() << endl;

    cout << q.size() << endl;
    cout << q.empty();
}