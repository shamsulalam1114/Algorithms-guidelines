#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void printList(int *p, int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n----------------------"<<endl;
}

int *bubbleSort(int *p, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(p[j]>p[j+1]) swap(p[j],p[j+1]);
        }
    }

return p;
}

int main(){

int n=100000;
int *a=new int[n];

ifstream fin("20.txt");

//read from file and save in array
for(int i=0;i<n;i++){
    fin>>a[i];
}

//printList(a,n);
auto start = high_resolution_clock::now();
int *m=bubbleSort(a,n);
auto stop = high_resolution_clock::now();
auto duration = duration_cast<seconds>(stop - start);
cout << duration.count() << endl;
//printList(m,n);

}

