#include<bits/stdc++.h>
using namespace std;

class Matrix{
private:
    int row;
    int colum;
    int **m;
public:
    Matrix(){
        row=5;
        colum=5;
        m= new int*[row];
        for(int i=0;i<row;i++){
            m[i] = new int[colum];
        }
    }

     Matrix(int row, int colum){
        this->row=row;
        this->colum=colum;
        m= new int*[row];
        for(int i=0;i<row;i++){
            m[i] = new int[colum];
        }
    }

void printMatrix(){

    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"............."<<endl;
    }

};



int main(){

Matrix *m1=new Matrix(3,4);
m1->printMatrix();




return 0;
}
