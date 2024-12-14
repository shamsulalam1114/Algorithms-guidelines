#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Queue{
private:
    int n;
    int frontq;
    int backq;
    T *A;
public:
    Queue(){
        n=10;
        frontq=0;
        backq=-1;
        A = new T[n];
    }
     Queue(int n){
        this->n=n;
        frontq=0;
        backq=-1;
        A = new T[n];
    }

    bool isFull(){
        return backq==n-1?1:0;
    }

    bool isEmpty(){
        return backq==frontq-1 || backq==-1;
    }

    void enqueue(T x){
        if(isFull()){
            cout<<"Full \n";
        }else{
            A[++backq]=x;
        }


    }


    void dequeue(){
        if(isEmpty()){
            cout<<"Empty \n";
        }else{
            frontq++;
        }

    }
    T frontElement(){
        return A[frontq];
    }

    void showQueue(){
        if(isEmpty()){
            cout<<"Empty \n";
        }else{
            for(int i=frontq;i<=backq;i++){
            cout<<A[i]<<endl;
        }
        }


    }


};



int main(){

Queue<string> *q= new Queue<string>();
q->enqueue("Richard");
q->enqueue("Aaron");
q->enqueue("Karim");
q->dequeue();
q->showQueue();


return 0;
}
