#include<bits/stdc++.h>
using namespace std;

#define n 5
int Stack[n];
int t=-1;

bool isFull(){
    return t==n-1;
}

bool isEmpty(){
    return t==-1;

}

void push(int x){
    if(isFull()){
        cout<<"overflow\n";
    }else{
        Stack[++t]=x;
    }

}

void pop(){
    if(isEmpty()){
        cout<<"Underflow\n";
    }else{
        t--;
    }

}
void printStack(){

    for(int i=t;i>=0;i--) cout<<Stack[i]<<endl;
}

int top(){
return Stack[t];
}

int Size(){
return t+1;
}

int main(){

push(10);
push(20);
cout<<Size()<<endl;

//printStack();



}
