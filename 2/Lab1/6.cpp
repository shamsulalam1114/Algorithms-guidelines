#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int n){

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int * insertBegin(int *p, int n, int E){
    int *b= new int[n+1];
    b[0]= E;
    for(int i=0;i<n;i++){
        b[i+1]=p[i];
    }
    return b;

}

int main(){

    int a[5]={10,20,30,40,50};
    printList(a,5);
    int *k = insertBegin(a,5,100);
    printList(k,5+1);




return 0;
}
