#include<bits/stdc++.h>
using namespace std;


int main(){

cout<<"Please enter the size of the array:";
int n;
cin>>n;

ifstream fin("1000k.txt");

int *a= new int[n];

for(int i=0;i<n;i++) fin>>a[i];
for(int i=0;i<n;i++) cout<<a[i]<<endl;



return 0;
}
