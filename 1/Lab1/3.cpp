#include<iostream>
using namespace std;

void printArray(int *A,int n){

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void shiftList(int *A, int n,int k){

    for(int j=0;j<k;j++){
        for(int i=1;i<n;i++){
            A[i-1]=A[i];
        }
    }

    for(int i=n-1;i>=n-k;i--){
        A[i]=0;
    }
}

int main(){

int a[6]={10,20,30,40,50,60};
printArray(a,6);
shiftList(a,6,2);
printArray(a,6);

return 0;
}
