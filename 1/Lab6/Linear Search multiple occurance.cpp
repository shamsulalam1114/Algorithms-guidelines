#include<bits/stdc++.h>
using namespace std;


stack<int> linearSearch(int *p, int n, int item){

    stack<int> s;

    for(int i=0;i<n;i++){
        if(p[i]==item){
            s.push(i);
        }
    }
return s;

}

int main(){

int n=100000;
int *a = new int[n];
ifstream fin("100k.txt");

for(int i=0;i<n;i++){
    fin>>a[i];
}

stack<int> indexes = linearSearch(a,n,200);

while(!indexes.empty()){

    cout<<indexes.top()<<" "<<a[indexes.top()]<<endl;
    indexes.pop();
}



return 0;
}
