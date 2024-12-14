#include<bits/stdc++.h>
using namespace std;

int main(){

srand(time(0));
ofstream fout("100k.txt");
int n=100000;

for(int i=0;i<n;i++){

    fout<<rand()<<endl;
}


return 0;
}
