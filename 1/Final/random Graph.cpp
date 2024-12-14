#include<bits/stdc++.h>
using namespace std;


int main(){

    ofstream fout("G.txt");

    int n=10;
    srand(time(0));
    fout<<n<<endl;
    int cmt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                double p = (rand()%100+1)/100.0;
                if(p>=0.4){
                cmt++;
                    fout<<i<<" "<<j<<endl;
                }
            }
        }
    }
    fout<<cmt<<endl;

return 0;
}
