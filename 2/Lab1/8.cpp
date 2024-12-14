#include<bits/stdc++.h>
using namespace std;

int main(){
srand(time(0));

ofstream fout("1000k.txt");

for(int i=0;i<1000000;i++) fout<<rand()<<endl;

return 0;
}
