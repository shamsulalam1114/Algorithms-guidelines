#include<bits/stdc++.h>
using namespace std;


int main(){

srand(time(0));

ofstream fout("100k.txt");

for(int i=0;i<100000;i++) fout<<rand()<<endl;

return 0;
}
