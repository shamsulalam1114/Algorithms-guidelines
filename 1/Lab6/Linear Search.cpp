#include<bits/stdc++.h>
using namespace std;


int linearSearch(int *p, int n, int item){

for(int i=0;i<n;i++){
    if(p[i]==item){
        return i;
    }
}
return -1;

}

int main(){

int n=100000;
int *a = new int[n];
ifstream fin("100k.txt");

for(int i=0;i<n;i++){
    fin>>a[i];
}

int index = linearSearch(a,n,200);
cout<<index<<" "<<a[index]<<endl;

return 0;
}
