#include<iostream>
using namespace std;

void printArray(int *A,int n){

    for(int i=0;i<n;i++){
        cout<<i<<" "<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
    cout<<"============="<<endl;
}

void shiftList(int *A, int n){

    for(int i=1;i<n;i++){
        A[i-1]=A[i];
    }

}

int main(){

int a[6]={10,20,30,40,50,60};
cout<<a<<endl;
printArray(a,6);
shiftList(a,6);

printArray(a,6);

return 0;
}
