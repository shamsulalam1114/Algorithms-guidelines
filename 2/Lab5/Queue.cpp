#include<bits/stdc++.h>
using namespace std;

/*
Queue ADT
=============
1. enqueue(x)
2. dequeue()
3. frontElement()
4. showQueue()
5. isFull()
6. isEmpty()
*/

# define n 4
int A[n];
int frontq=0;
int backq=-1;

bool isFull(){
    return backq==n-1?1:0;
}

bool isEmpty(){
    return backq==frontq-1 || backq==-1;
}

void enqueue(int x){
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
int frontElement(){
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

int main(){

enqueue(10);
dequeue();
dequeue();
showQueue();



return 0;
}
