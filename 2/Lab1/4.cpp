#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int n){

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void insertBegin(int *p, int n, int E){
    int *b= new int[n+1];
    b[0]= E;
    for(int i=0;i<n;i++){
        b[i+1]=p[i];
    }
    for(int i=0;i<n+1;i++){
        cout<<b[i]<<" ";
    }
}

int main(){

    int a[5]={10,20,30,40,50};
    printList(a,5);
    insertBegin(a,5,100);




return 0;
}
