#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
}

double avg(int *p, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }
    return (double)sum/(double)n;
}

int* bonus(int *p, int n, int bo){
    int *b=new int[n];
    for(int i=0;i<n;i++){
            if(p[i]+bo>100){
                    b[i]=p[i];
            }else{
                b[i]=p[i]+bo;
            }

    }
    return b;
}

int main(){

int n=40;

int *a= new int[n];

ifstream fin("marks.txt");

for(int i=0;i<n;i++){
    fin>>a[i];
}
printList(a,n);
double av=avg(a,n);cout<<"Avg: "<<av<<endl;
int *m=bonus(a,n,10);
printList(m,n);
av=avg(m,n);cout<<"Avg: "<<av<<endl;

return 0;
}
