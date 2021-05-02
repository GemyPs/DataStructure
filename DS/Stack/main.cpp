#include <bits/stdc++.h>
#include "Stack.cpp"

using namespace std;

int main(){
    Stack<int> st;
    st.push(5);
    st.push(3);
    st.push(6);
    st.push(8);

    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;
    st.top();
}