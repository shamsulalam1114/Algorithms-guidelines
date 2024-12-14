#include<bits/stdc++.h>
using namespace std;

double findAvg(int *p, int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=p[i];
    return (double)sum/n;
}

int main(){

int n=40;
int *a=new int[n];

ifstream fin("marks.txt");

//read from file and save in array
for(int i=0;i<n;i++){
    fin>>a[i];
}

for(int i=0;i<n;i++){
    cout<<i<<" "<<a[i]<<endl;
}

cout<<"Avg: "<<findAvg(a,n);

}
