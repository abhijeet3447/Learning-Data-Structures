#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation of stack
    stack<int> st;

    st.push(2);
    st.push(3);

    st.pop();
    st.pop();

    cout<<"Top element of stack is : "<<st.top()<<endl;

    if(st.empty()){
        cout<<"Stack is Empty!!!"<<endl;
    }else{
        cout<<"Size of the Stack is : "<<st.size()<<endl;
    }
        
    


}