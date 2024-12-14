#include<iostream>
using namespace std;

void printList(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int sumList(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++) sum=sum+a[i];
    return sum;
}

int * makeDouleList(int *p,int n){
    int *k=new int[n];
     for(int i=0;i<n;i++){
        k[i]=p[i]*2;
     }
     return k;
}

int main(){

    int a[5]={10,20,30,40,50};
    printList(a,5);
    cout<<sumList(a,5)<<endl;
    int *b=makeDouleList(a,5);
    printList(b,5);

return 0;
}
