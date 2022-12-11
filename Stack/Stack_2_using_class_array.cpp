#include<bits/stdc++.h>
using namespace std;

class Stack{

    //properties
    public:
        int *arr;
        int size;
        int top;

    //behaviours and functions
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }


    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peak(){
        if(top >= 0){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        return false;
    }

};



int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak()<<endl;


    if(st.isEmpty()){
        cout<<"Stack is Empty!!!"<<endl;
    }else{
        cout<<"Stack is not Empty"<<endl;
    }
}