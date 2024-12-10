#include<iostream>
#include<stack>

using namespace std;

class stack_class
{

public:
    int* arr;
    int size;
    int top;

    stack_class(int size){
        arr = new int[size];
        this -> size= size;
        this->top= -1;
    }

    void push(int data){
        if(top==size-1){
            cout<<"Stack overflowed";
        }else{
            top++;
            arr[top]=data;
        }
    }


    void pop(){
        if(top==-1){
            cout<<"Stack underflow";

        }else{
            top--;
        }
    }

    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"Stack Empty";
            return -1;

        }else{
            return arr[top];
        }
    }

    int getSize(){

        if(top==-1){
            cout<<"Stack Empty";
            return 0;

        }else{
            return top+1;
        }

    }

};



int main(){

    stack_class st(5);

    st.push(10);

    cout<<st.getTop();

    

}