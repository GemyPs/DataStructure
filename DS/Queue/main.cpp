#include<bits/stdc++.h>
#include "Queue.cpp"

using namespace std;
int main(){
    Queue<int> q;
    q.push_back(5);
    q.push_back(6);
    q.push_back(7);

    q.front();
    q.pop_front();
    q.front();

    q.back();

    q.size();
    q.empty();
}