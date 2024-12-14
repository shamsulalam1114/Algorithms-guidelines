#include<bits/stdc++.h>
using namespace std;

int main(){

srand(time(0));

ofstream fout("marks.txt");

for(int i=0;i<40;i++){
    fout<<rand()%100+1<<endl;
}




return 0;
}

