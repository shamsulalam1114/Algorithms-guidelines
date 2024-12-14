#include<bits/stdc++.h>
using namespace std;


int main(){

srand(time(0));

int vertex=100;
ofstream fout("100.txt");
fout<<vertex<<" "<<endl;
int edge=0;
double r;
for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
                r=(((rand()%100)+1)/100.0);
            cout<<r<<endl;
            if(i!=j && r>0.8){
                fout<<i<<" "<<j<<endl;
                edge++;
            }
        }

}
fout<<edge;


return 0;
}
