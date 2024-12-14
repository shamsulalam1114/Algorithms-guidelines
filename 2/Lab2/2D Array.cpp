#include<bits/stdc++.h>
using namespace std;

void printMatrix(int **p, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){

int row;
int column;
cout<<"Enter the row and column:"<<endl;
cin>>row>>column;

int **m = new int*[row];
for(int i=0;i<row;i++) m[i]=new int[column];

srand(time(0));
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        m[i][j]=rand()%100;
    }
}

printMatrix(m,row,column);


return 0;
}
