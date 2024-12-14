
#include<iostream>
using namespace std;

void printList(int A[],int n){
    for(int i=0;i<n;i++){

        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void shiftLeft(int *A, int n,int k){

for(int j=0;j<k;j++){
        for(int i=0;i<n-1;i++){
            A[i]=A[i+1];
        }

}
    for(int i=n-k;i<n;i++){
        A[i]=0;

    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

}

int main(){

    int a[5]={10,20,30,40,50};
    printList(a,5);
    shiftLeft(a,5,2);

return 0;
}
