#include<bits/stdc++.h>
using namespace std;


int main(){

    srand(time(0));
    int a;
    int n=100000;
    ofstream fout("20.txt");
    for(int i=0;i<n;i++){
        a=rand();
        fout<<a<<endl;
    }



}
