#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
private:
    int n;
    int top;
    T *s;
public:
    Stack(){
        n=3;
        top=-1;
        s=new T[n];
    }
    Stack(int n){
        this->n=n;
        top=-1;
        s=new T[n];
    }

    bool isFull(){
        return top==n-1?true:false;
    }

    bool isEmpty(){
        return top==-1?true:false;
    }

    void push(T x){
        if(isFull()){
            cout<<"Full"<<endl;
            return;
        }else{
        s[++top]=x;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
            return;
        }else{
            top--;
        }

    }

    int findTop(){
        return top;
    }

    void printStack(){
        for(int i=top;i>=0;i--){
                cout<<s[i]<<endl;
        }
        cout<<"=============="<<endl;
    }


};



int main(){

/*
Stack a(2);
a.push(10);
a.push(20);
a.push(30);
a.push(40);
a.printStack();
*/

Stack<string> *a=new Stack<string>(5);
a->push("Richard");
a->push("Aaron");

a->printStack();



return 0;
}
