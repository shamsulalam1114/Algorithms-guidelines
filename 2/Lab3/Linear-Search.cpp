#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int n){

for(int i=0;i<n;i++){
    cout<<p[i]<<"\n";
}
}

stack<int> linearSearch(int *p, int n, int x){
    stack<int> s;
    for(int i=0;i<n;i++){
        if(p[i]==x) s.push(i);
    }
    return s;
}


int main(){

ifstream fin("100k.txt");
int n=100000;
int *a= new int[n];

for(int i=0;i<n;i++) fin>>a[i];
//printList(a,n);
stack<int> m=linearSearch(a,n,200);

while(!m.empty()){
    cout<<m.top()<<" "<<a[m.top()]<<endl;
    m.pop();
}


return 0;
}
